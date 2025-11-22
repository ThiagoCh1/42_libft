NAME        = libft.a

SRC_DIR     = src
PRINTF_DIR  = $(SRC_DIR)/ft_printf
PRINTF_SRC  = $(PRINTF_DIR)/src
PRINTF_UTIL = $(PRINTF_DIR)/utils
INC_DIR     = includes

SRCS_LIBFT  = \
    $(SRC_DIR)/ft_atoi.c \
    $(SRC_DIR)/ft_bzero.c \
    $(SRC_DIR)/ft_calloc.c \
    $(SRC_DIR)/ft_isalpha.c \
    $(SRC_DIR)/ft_isascii.c \
    $(SRC_DIR)/ft_isdigit.c \
    $(SRC_DIR)/ft_isprint.c \
    $(SRC_DIR)/ft_itoa.c \
    $(SRC_DIR)/ft_lstadd_front.c \
    $(SRC_DIR)/ft_lstclear.c \
    $(SRC_DIR)/ft_lstdelone.c \
    $(SRC_DIR)/ft_lstiter.c \
    $(SRC_DIR)/ft_lstlast.c \
    $(SRC_DIR)/ft_lstmap.c \
    $(SRC_DIR)/ft_lstnew.c \
    $(SRC_DIR)/ft_lstsize.c \
    $(SRC_DIR)/ft_memchr.c \
    $(SRC_DIR)/ft_memcmp.c \
    $(SRC_DIR)/ft_memcpy.c \
    $(SRC_DIR)/ft_memmove.c \
    $(SRC_DIR)/ft_memset.c \
    $(SRC_DIR)/ft_putchar_fd.c \
    $(SRC_DIR)/ft_putendl_fd.c \
    $(SRC_DIR)/ft_putnbr_fd.c \
    $(SRC_DIR)/ft_putstr_fd.c \
    $(SRC_DIR)/ft_split.c \
    $(SRC_DIR)/ft_strchr.c \
    $(SRC_DIR)/ft_strdup.c \
    $(SRC_DIR)/ft_striteri.c \
    $(SRC_DIR)/ft_strjoin.c \
    $(SRC_DIR)/ft_strlcat.c \
    $(SRC_DIR)/ft_strlcpy.c \
    $(SRC_DIR)/ft_strlen.c \
    $(SRC_DIR)/ft_strmapi.c \
    $(SRC_DIR)/ft_strncmp.c \
    $(SRC_DIR)/ft_strnstr.c \
    $(SRC_DIR)/ft_strrchr.c \
    $(SRC_DIR)/ft_strtrim.c \
    $(SRC_DIR)/ft_substr.c \
    $(SRC_DIR)/ft_tolower.c \
    $(SRC_DIR)/ft_toupper.c

SRCS_PRINTF = \
    $(PRINTF_SRC)/ft_printf.c \
    $(PRINTF_SRC)/parse_format.c \
    $(PRINTF_SRC)/print_char.c \
    $(PRINTF_SRC)/print_hex.c \
    $(PRINTF_SRC)/print_int.c \
    $(PRINTF_SRC)/print_percent.c \
    $(PRINTF_SRC)/print_ptr.c \
    $(PRINTF_SRC)/print_str.c \
    $(PRINTF_SRC)/print_unint.c \
    $(PRINTF_UTIL)/apply_precision.c \
    $(PRINTF_UTIL)/apply_width.c \
    $(PRINTF_UTIL)/ft_itoa_base.c \
    $(PRINTF_UTIL)/strjoin_free.c

SRCS        = $(SRCS_LIBFT) $(SRCS_PRINTF)
OBJS        = $(SRCS:.c=.o)

CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f
INCLUDES    = -I $(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
