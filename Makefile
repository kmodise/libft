CC = gcc
FLAG = -Wall -Wextra -Werror

SOURCE = ft_putstr.c ft_memset.c

dot_a: dot_o
	ar rc libft.a *.o

dot_o:
	$(CC) $(FLAG) -c $(SOURCE)

clean_o:
	rm *.o

clean_a:
	rm libft.a
