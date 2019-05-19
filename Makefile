HEADERS = libft.h

NAME = libft.a

CC = gcc

FLAG = -Wall -Wextra -Werror

SOURCE = ft_memset.c test.c

OBJECT = $(SOURCE:.c=.o)

all: dotc
	ar rc $(NAME) $(OBJECT) $(HEADERS)
dotc:
	$(CC) -c $(SOURCE) $(FLAG)

clean:
	rm *.o

fclean: clean
	rm *.a

re: fclean all
