# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlaftiss <nlaftiss@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 13:34:53 by nlaftiss          #+#    #+#              #
#    Updated: 2022/11/11 13:48:57 by nlaftiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\

BONUS =	ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c\
		
HEADER			=	libft.h

OBJ_DIR			=	objects

OBJECTS			=	$(SRC:%.c=$(OBJ_DIR)/%.o)
OBJECTS_BONUS	=	$(BONUS:%.c=$(OBJ_DIR)/%.o)

NAME			=	libft.a
NAME_BONUS		=	libft_bonus.a

CC				=	clang
AR				=	ar
RM				=	rm -rf

CFLAGS			=	-Wall -Wextra -Werror
ARFLAGS 		=	rcs

$(OBJ_DIR)/%.o:		%.c $(HEADER)
					$(CC) $(CFLAGS) -c $< -o $@

all:				$(NAME)

bonus:				$(NAME_BONUS)

$(NAME):			$(OBJ_DIR) $(OBJECTS) $(HEADER)
					$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

$(NAME_BONUS):		$(NAME) $(OBJ_DIR) $(OBJECTS_BONUS) $(HEADER)
					$(AR) $(ARFLAGS) $(NAME) $(OBJECTS_BONUS)
					cp $(NAME) $(NAME_BONUS)

$(OBJ_DIR):
					mkdir -p $(OBJ_DIR)

clean:
					$(RM) $(OBJ_DIR)

fclean:				clean
					$(RM) $(NAME) $(NAME_BONUS)

re:					fclean all

.PHONY:				all clean fclean re bonus
