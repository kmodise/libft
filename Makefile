CC = gcc
FLAG = -Wall -Wextra -Werror

SOURCE = ft_strncmp.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_memccpy.c ft_memcpy.c ft_bzero.c ft_strstr.c ft_strrchr.c ft_strcmp.c ft_strchr.c ft_strlcat.c ft_strncat.c ft_strcat.c ft_strncpy.c ft_strcpy.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putstr.c ft_memset.c ft_putchar.c test.c

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
