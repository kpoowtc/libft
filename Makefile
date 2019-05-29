# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpoo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 09:28:07 by kpoo              #+#    #+#              #
#    Updated: 2019/05/28 11:45:04 by kpoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SRCS = ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c ./ft_putchar.c \
       ./ft_strcpy.c ./ft_tolower.c ./ft_bzero.c ./ft_isalpha.c \
       ./ft_isdigit.c ./ft_memset.c ./ft_putstr.c ./ft_strlen.c ./ft_toupper.c \
	   ./ft_strchr.c ./ft_strcat.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)


$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

