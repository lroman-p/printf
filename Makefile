# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 10:59:01 by lroman-p          #+#    ###              #
#    Updated: 2024/03/03 12:40:52 by lroman-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS	= ft_printf.c\
		  ft_printf_char.c ft_printf_nbr.c ft_printf_unsigned.c\
		  ft_printf_string.c	ft_printf_hexadecimal.c ft_printf_pointers.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc
RM	= rm -rf

CFLAGS	= -Wall -Werror -Wextra

AR = ar	crs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all	clean fclean re
