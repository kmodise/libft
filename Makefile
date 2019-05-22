CC = gcc
FLAG = -Wall -Wextra -Werror

SOURCE = ft_strcat.c ft_strncpy.c ft_strcpy.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putstr.c ft_memset.c ft_putchar.c test.c

run:
	$(CC) $(FLAG) $(SOURCE) -o test
	./test

norm:
	norminette -R CheckForbiddenSourceHeader

dot_a: dot_o
	ar rc libft.a *.o

dot_o:
	$(CC) $(FLAG) -c $(SOURCE)

clean_o:
	rm *.o

clean_a:
	rm libft.a
