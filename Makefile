# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpoo <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 09:28:07 by kpoo              #+#    #+#              #
#    Updated: 2019/06/07 13:54:16 by kpoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c

SRCS = ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memccpy.c ./ft_memmove.c\
	   ./ft_memchr.c ./ft_memcmp.c ./ft_strlen.c ./ft_strdup.c ./ft_strcpy.c\
	   ./ft_strncpy.c ./ft_strcat.c ./ft_strncat.c ./ft_strchr.c ./ft_strrchr.c\
	   ./ft_strstr.c ./ft_strnstr.c ./ft_strcmp.c ./ft_strncmp.c ./ft_atoi.c\
	   ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c\
	   ./ft_toupper.c ./ft_tolower.c ./ft_strlcat.c ./ft_memalloc.c\
	   ./ft_memdel.c ./ft_strnew.c ./ft_strdel.c ./ft_putchar.c ./ft_putstr.c\
	   ./ft_strclr.c ./ft_putendl.c ./ft_putchar_fd.c ./ft_putstr_fd.c\
	   ./ft_putendl_fd.c ./ft_putendl.c ./ft_striter.c ./ft_striteri.c\

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

