CC = gcc

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SOURCE = ft_memmove.c ft_strdup.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_memccpy.c ft_memcpy.c ft_bzero.c ft_strstr.c ft_strrchr.c ft_strcmp.c ft_strchr.c ft_strlcat.c ft_strncat.c ft_strcat.c ft_strncpy.c ft_strcpy.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putstr.c ft_memset.c ft_putchar.c test.c

all: $(NAME)

OBJ = $(SOURCE:.c=.o)

norm:
        norminette -R CheckForbiddenSourceHeader
	
$(NAME):
        gcc $(FLAG) -c $(SOURCE)
        ar rc $(NAME) $(OBJ)
        ranlib $(NAME)
	
test: all
        gcc $(flag) test.c

clean:
        rm *.o

fclean: clean
        rm $(NAME)
	
re: fclean all
