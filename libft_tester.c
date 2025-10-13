// libft_tester.c (portable)
// 42 libft tester covering mandatory + bonus.
// Build (adjust include/library paths if needed):
//   cc libft_tester.c -I. -L. -lft -o libft_tester
// Or compile sources directly if you don't have libft.a:
//   cc libft_tester.c $(find . -name "*.c" ! -name "main.c" 2>/dev/null) -I. -o libft_tester
//
// Run:
//   ./libft_tester
//
// This version avoids non-standard libc dependencies by providing
// a local reference for strnstr, and removes any C++-only syntax.

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

// ---------- helpers ----------

static void print_heading(const char *title) {
    printf("\n============================================================\n");
    printf("%s\n", title);
    printf("============================================================\n");
}

static void print_ok(int cond, const char *name) {
    printf("[%s] %s\n", cond ? "OK" : "KO", name);
}

static int strequ(const char *a, const char *b) {
    if (!a && !b) return 1;
    if (!a || !b) return 0;
    return strcmp(a,b)==0;
}

// ---------- portable reference strnstr ----------
// Reference implementation to compare against ft_strnstr without relying on libc.
static char *ref_strnstr(const char *big, const char *little, size_t len) {
    size_t i, j;
    if (!*little)
        return (char *)big;
    for (i = 0; big[i] && i < len; i++) {
        if (big[i] == little[0]) {
            j = 0;
            while (little[j] && i + j < len && big[i + j] == little[j])
                j++;
            if (!little[j])
                return (char *)&big[i];
        }
    }
    return NULL;
}

// ---------- callbacks for strmapi/iteri ----------
static char map_upper(unsigned int i, char c) {
    (void)i;
    return (char)toupper((unsigned char)c);
}
static void iter_add_index(unsigned int i, char *c) {
    *c = (char)(*c + (i%26));
}

// ========== Part 1: libc-like ==========

static void test_isxx(void) {
    print_heading("PART 1: <ctype.h> family & basics");

    // is* group
    int ok = 1;
    for (int c=-1;c<=256;c++) {
        if (!!ft_isalpha(c) != !!isalpha((unsigned char)c)) { ok = 0; break; }
    }
    print_ok(ok, "ft_isalpha");

    ok = 1;
    for (int c=-1;c<=256;c++) {
        if (!!ft_isdigit(c) != !!isdigit((unsigned char)c)) { ok = 0; break; }
    }
    print_ok(ok, "ft_isdigit");

    ok = 1;
    for (int c=-1;c<=256;c++) {
        if (!!ft_isalnum(c) != !!isalnum((unsigned char)c)) { ok = 0; break; }
    }
    print_ok(ok, "ft_isalnum");

    ok = 1;
    for (int c=-1024;c<=1024;c++) {
        int a = ft_isascii(c);
        int b = (c >= 0 && c <= 127);
        if (!!a != !!b) { ok = 0; break; }
    }
    print_ok(ok, "ft_isascii");

    ok = 1;
    for (int c=-1;c<=256;c++) {
        if (!!ft_isprint(c) != !!isprint((unsigned char)c)) { ok = 0; break; }
    }
    print_ok(ok, "ft_isprint");

    ok = 1;
    for (int c=1;c<=255;c++) {
        if (ft_toupper(c) != toupper((unsigned char)c)) { ok = 0; break; }
    }
    print_ok(ok, "ft_toupper");

    ok = 1;
    for (int c=1;c<=255;c++) {
        if (ft_tolower(c) != tolower((unsigned char)c)) { ok = 0; break; }
    }
    print_ok(ok, "ft_tolower");

    // strlen
    print_ok(ft_strlen("") == strlen(""), "ft_strlen empty");
    print_ok(ft_strlen("Hello") == strlen("Hello"), "ft_strlen normal");
    {
        const char *s3 = "With\0Zeros"; // strlen stops at NUL
        print_ok(ft_strlen(s3) == strlen(s3), "ft_strlen with embedded NUL (prefix only)");
    }

    // memset
    {
        unsigned char a[10]; unsigned char b[10];
        memset(a, 0xAA, sizeof(a));
        ft_memset(b, 0xAA, sizeof(b));
        print_ok(memcmp(a,b,sizeof(a))==0, "ft_memset basic");
    }

    // bzero (compare to expected all-zero buffer, avoid libc bzero)
    {
        unsigned char b[10]; for (int i=0;i<10;i++) b[i]=0xFF;
        ft_bzero(b, sizeof(b));
        int allz = 1; for (int i=0;i<10;i++) if (b[i]!=0) { allz=0; break; }
        print_ok(allz, "ft_bzero");
    }

    // memcpy (no overlap)
    {
        unsigned char src[16]; for (int i=0;i<16;i++) src[i]=i;
        unsigned char a[16]; unsigned char b[16];
        memcpy(a, src, 16);
        ft_memcpy(b, src, 16);
        print_ok(memcmp(a,b,16)==0, "ft_memcpy");
    }

    // memmove (with overlap)
    {
        char sA[32] = "abcdefghijklmnop";
        char sB[32] = "abcdefghijklmnop";
        memmove(sA+4, sA, 10);
        ft_memmove(sB+4, sB, 10);
        int ok1 = memcmp(sA,sB,32)==0;
        memmove(sA, sA+4, 10);
        ft_memmove(sB, sB+4, 10);
        int ok2 = memcmp(sA,sB,32)==0;
        print_ok(ok1 && ok2, "ft_memmove overlap both ways");
    }

    // strlcpy
    {
        char d1[8]; char d2[8];
        size_t r1 = strlcpy(d1, "HelloWorld", sizeof(d1));
        size_t r2 = ft_strlcpy(d2, "HelloWorld", sizeof(d2));
        print_ok(r1==r2 && strcmp(d1,d2)==0, "ft_strlcpy truncation");
    }

    // strlcat
    {
        char a[12]; char b[12];
        a[0]='\0'; b[0]='\0';
        size_t r1 = strlcat(a, "Hello", sizeof(a));
        size_t r2 = ft_strlcat(b, "Hello", sizeof(b));
        r1 = strlcat(a, "World", sizeof(a));
        r2 = ft_strlcat(b, "World", sizeof(b));
        print_ok(r1==r2 && strcmp(a,b)==0, "ft_strlcat append");
    }

    // strchr
    {
        const char *s = "banana";
        print_ok(ft_strchr(s, 'a') == strchr(s, 'a'), "ft_strchr first");
        print_ok(ft_strchr(s, 'z') == NULL, "ft_strchr not-found");
        print_ok(ft_strchr(s, '\0') == strchr(s, '\0'), "ft_strchr NUL");
    }

    // strrchr
    {
        const char *s = "banana";
        const char *r1 = strrchr(s,'a');
        const char *r2 = ft_strrchr(s,'a');
        print_ok((r1 && r2 ? (r1-s)==(r2-s) : r1==r2), "ft_strrchr last");
    }

    // strncmp
    {
        print_ok(ft_strncmp("abc","abd",2)==strncmp("abc","abd",2), "ft_strncmp n=2");
        print_ok(ft_strncmp("abc","abd",3)==strncmp("abc","abd",3), "ft_strncmp n=3");
        print_ok(ft_strncmp("abcd","abc",5)==strncmp("abcd","abc",5), "ft_strncmp len diff");
    }

    // memchr
    {
        const unsigned char buf[] = {0,1,2,3,4,5,2,1,0};
        void *a = memchr(buf, 2, sizeof(buf));
        void *b = ft_memchr(buf, 2, sizeof(buf));
        print_ok(a==b, "ft_memchr find 2");
    }

    // memcmp
    {
        const unsigned char A[] = {1,2,3};
        const unsigned char B[] = {1,2,4};
        int r1 = memcmp(A,B,3);
        int r2 = ft_memcmp(A,B,3);
        print_ok((r1<0 && r2<0) || (r1>0 && r2>0) || (r1==0 && r2==0), "ft_memcmp ordering");
    }

    // strnstr (compare to local reference)
    {
        const char *big = "aaabcabcd";
        const char *little = "abc";
        size_t len = 9;
        char *r1 = ref_strnstr(big, little, len);
        char *r2 = ft_strnstr(big, little, len);
        print_ok((!r1 && !r2) || (r1 && r2 && (r1-big)==(r2-big)), "ft_strnstr basic");
        r1 = ref_strnstr(big, "", len);
        r2 = ft_strnstr(big, "", len);
        print_ok(r1==big && r2==big, "ft_strnstr empty needle");
    }

    // atoi
    {
        const char *cases[] = {"0","42","+42","-42"," \t\n  -123abc","2147483647","-2147483648","999999999999","-999999999999", NULL};
        int ok_all = 1;
        for (int i=0; cases[i]; i++) {
            int a = ft_atoi(cases[i]);
            int b = atoi(cases[i]);
            if (a!=b) {
                ok_all = 0;
                printf("KO: input='%s' -> ft_atoi=%d vs atoi=%d\n", cases[i], a, b);
            }
        }
        print_ok(ok_all, "ft_atoi");
    }

    // calloc
    {
        size_t n=16, sz=4;
        unsigned char *a = (unsigned char*)calloc(n,sz);
        unsigned char *b = (unsigned char*)ft_calloc(n,sz);
        int same = (a && b) ? memcmp(a,b,n*sz)==0 : 0;
        print_ok(same, "ft_calloc zeroed");
        free(a); free(b);
    }

    // strdup
    {
        const char *s = "duplicate me";
        char *a = strdup(s);
        char *b = ft_strdup(s);
        int ok2 = a && b && strcmp(a,b)==0;
        print_ok(ok2, "ft_strdup");
        free(a); free(b);
    }
}

// ========== Part 2: additional ==========

static void test_part2(void) {
    print_heading("PART 2: additional functions");

    // substr
    {
        char *out = ft_substr("0123456789", 3, 4);
        print_ok(strequ(out,"3456"), "ft_substr mid");
        free(out);
        out = ft_substr("short", 42, 10);
        print_ok(strequ(out,""), "ft_substr start beyond");
        free(out);
    }

    // strjoin
    {
        char *j = ft_strjoin("Hello", "World");
        print_ok(strequ(j,"HelloWorld"), "ft_strjoin");
        free(j);
    }

    // strtrim
    {
        char *t = ft_strtrim(".. 42 libft ..", ". ");
        print_ok(strequ(t,"42 libft"), "ft_strtrim dotted-spaces");
        free(t);
        t = ft_strtrim("xxxxx", "x");
        print_ok(strequ(t,""), "ft_strtrim all");
        free(t);
    }

    // split (42's split skips empty fields)
    {
        char **sp = ft_split("one,,two,three,", ',');
        int ok = sp && strequ(sp[0],"one") && strequ(sp[1],"two") && strequ(sp[2],"three") && sp[3]==NULL;
        print_ok(ok, "ft_split skips empties");
        if (sp){ for (int i=0; sp[i]; i++) free(sp[i]); free(sp); }
    }

    // itoa
    {
        char *a = ft_itoa(0);      print_ok(strequ(a,"0"), "ft_itoa 0"); free(a);
        a = ft_itoa(42);           print_ok(strequ(a,"42"), "ft_itoa 42"); free(a);
        a = ft_itoa(-2147483648);  print_ok(strequ(a,"-2147483648"), "ft_itoa INT_MIN"); free(a);
    }

    // strmapi / striteri
    {
        const char *src = "abcd";
        char *m = ft_strmapi(src, map_upper);
        int ok = strequ(m,"ABCD");
        print_ok(ok, "ft_strmapi upper");
        free(m);

        char buf[8]; strcpy(buf,"aaaa");
        ft_striteri(buf, iter_add_index); // becomes a b c d
        print_ok(strequ(buf,"abcd"), "ft_striteri add index");
    }

    // put*fd (visual)
    {
        printf("Expect lines below (putchar, putstr, putendl, putnbr):\n");
        ft_putchar_fd('X', 1); write(1,"\n",1);
        ft_putstr_fd("Hello", 1); write(1,"\n",1);
        ft_putendl_fd("Line", 1);
        ft_putnbr_fd(-12345, 1); write(1,"\n",1);
    }
}

// ========== Bonus: linked list ==========

static void del_free(void *p) { free(p); }
static void *map_dup_upper(void *p) {
    if (!p) return NULL;
    char *s = (char*)p;
    size_t n = strlen(s);
    char *out = (char*)malloc(n+1);
    if (!out) return NULL;
    for (size_t i=0;i<n;i++) out[i] = (char)toupper((unsigned char)s[i]);
    out[n]='\0';
    return out;
}

static void test_bonus(void) {
    print_heading("BONUS: singly linked list (t_list)");

    // new/add/size/last/add_back
    {
        t_list *a = ft_lstnew(strdup("first"));
        t_list *b = ft_lstnew(strdup("second"));
        t_list *c = ft_lstnew(strdup("third"));
        ft_lstadd_front(&a, b); // b -> a -> (later c)
        ft_lstadd_back(&a, c);  // b -> a -> c

        int ok = (ft_lstsize(a)==3);
        print_ok(ok, "ft_lstsize==3");
        t_list *last = ft_lstlast(a);
        ok = last && last->content && strcmp((char*)last->content,"third")==0;
        print_ok(ok, "ft_lstlast->content == \"third\"");

        // cleanup
        t_list *tmp;
        while (a) { tmp=a->next; free(a->content); free(a); a=tmp; }
    }

    // delone/clear
    {
        t_list *a = ft_lstnew(strdup("node1"));
        t_list *b = ft_lstnew(strdup("node2"));
        ft_lstadd_back(&a, b);
        ft_lstdelone(b, del_free);
        a->next = NULL;
        ft_lstclear(&a, del_free);
        print_ok(a==NULL, "ft_lstclear");
    }

    // map
    {
        t_list *a = ft_lstnew(strdup("foo"));
        t_list *b = ft_lstnew(strdup("bar"));
        ft_lstadd_back(&a, b);
        t_list *mapped = ft_lstmap(a, map_dup_upper, del_free);
        int ok = mapped && strcmp((char*)mapped->content,"FOO")==0
              && mapped->next && strcmp((char*)mapped->next->content,"BAR")==0;
        print_ok(ok, "ft_lstmap upper");
        ft_lstclear(&a, del_free);
        ft_lstclear(&mapped, del_free);
    }
}

int main(void) {
    test_isxx();
    test_part2();
    test_bonus();

    printf("\nAll tests executed.\n");
    return 0;
}
