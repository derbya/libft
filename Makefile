# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aderby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/23 05:55:20 by aderby            #+#    #+#              #
#    Updated: 2017/09/22 21:52:00 by aderby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_lstmap.c ft_putchar_fd.c ft_strdel.c ft_strnequ.c \
	  ft_bzero.c ft_lstnew.c ft_putendl.c ft_strdup.c ft_strnew.c \
	  ft_memalloc.c ft_putendl_fd.c ft_strequ.c ft_strnstr.c ft_isalnum.c \
	  ft_memccpy.c ft_putnbr.c ft_striter.c ft_strrchr.c ft_isalpha.c \
	  ft_memchr.c ft_putnbr_fd.c ft_striteri.c ft_strsplit.c ft_isascii.c \
	  ft_memcmp.c ft_putstr.c ft_strjoin.c ft_strstr.c ft_isdigit.c \
	  ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strsub.c ft_isprint.c \
	  ft_memdel.c ft_strcat.c ft_strlen.c ft_strtrim.c ft_itoa.c ft_memmove.c \
	  ft_strchr.c ft_strmap.c ft_lstadd.c ft_memset.c ft_strclr.c \
	  ft_strmapi.c ft_tolower.c ft_lstdel.c ft_strcmp.c \
	  ft_strncat.c ft_toupper.c ft_lstdelone.c \
	  ft_strncmp.c ft_lstiter.c ft_putchar.c ft_strcpy.c ft_strncpy.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c -I libft.h $(SRC)
	ar rcs $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
