NAME = libft.a

SRC =  ft_atoi.c ft_isascii.c ft_strlcpy.c ft_strlen.c \
                               ft_strncmp.c \

OBJS = ft_atoi.o ft_isascii.o ft_strlcpy.o ft_strlen.o \
                                      ft_strncmp.o \

FLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all