NAME	= bsq

CC	= gcc

CFLAGS	= -Wall -Wextra -pedantic -g

RM	= rm -rf

SRCS	= src/convert_base.c \
	  src/get_option.c \
	  src/is_option.c \
	  src/my_countnb_b.c \
	  src/my_epur_str.c \
	  src/my_find_prime_sup.c \
	  src/my_get_el.c \
	  src/my_getnbr.c \
	  src/my_getnbr_base.c \
	  src/my_is_prime.c \
	  src/my_isneg.c \
	  src/my_parse.c \
	  src/my_power_it.c \
	  src/my_power_rec.c \
	  src/my_printf.c \
	  src/my_put.c \
	  src/my_put_nbr.c \
	  src/my_putblank.c \
	  src/my_putchar.c \
	  src/my_putint.c \
	  src/my_putnbr_base.c \
	  src/my_putptr.c \
	  src/my_putstr.c \
	  src/my_revstr.c \
	  src/my_show_wordtab.c \
	  src/my_showmem.c \
	  src/my_showstr.c \
	  src/my_sort_int_tab.c \
	  src/my_square_root.c \
	  src/my_str_isalpha.c \
	  src/my_str_islower.c \
	  src/my_str_isnum.c \
	  src/my_str_isprintable.c \
	  src/my_str_isupper.c \
	  src/my_str_to_wordtab.c \
	  src/my_strcapitalize.c \
	  src/my_strcat.c \
	  src/my_strcmp.c \
	  src/my_strcpy.c \
	  src/my_strdup.c \
	  src/my_strlcat.c \
	  src/my_strlen.c \
	  src/my_strlowcase.c \
	  src/my_strnbr.c \
	  src/my_strncat.c \
	  src/my_strncmp.c \
	  src/my_strncpy.c \
	  src/my_strstr.c \
	  src/my_strupcase.c \
	  src/my_swap.c \
	  src/my_uppercase.c \
	  src/worknb.c \
	  src/my_atoi.c \
	  src/bsq/bsq.c \
	  src/bsq/bsq_disp.c \
	  src/bsq/checks_bsq.c \
	  src/bsq/get_bsqmap.c \
	  src/bsq/get_ram.c \
	  src/bsq/my_fdup.c \
	  src/bsq/my_fgeti.c \
	  src/bsq/my_fgetsize.c \
	  src/bsq/my_fread.c \
	  src/bsq/my_opcl.c \
	  src/bsq/my_read_map.c \
	  src/bsq/bruteforce.c

OBJS	= $(SRCS:.c=.o)

all:	$(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all
