# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 10:59:01 by lroman-p          #+#    #+#              #
#    Updated: 2024/02/17 13:38:45 by lroman-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SCRS	=	ft_printf.c\	
		ft_print_char.c ft_print_nbr.c ft_print_unsigned.c ft_print_string.c\    ***//Define una lista de archivos fuentes//***
		ft_print_hexadecimal.c	ft_print_pointers.c

OBJS	=	$(SCRD:.c=.o)			**//define una lista de archivos objeto a partir de los archivos fuentes//**

NAME	=	libftprintf.a			**//define el nombre del archivo estatico que se generara//**

CC	=	gcc				**//define el compilador a utilizar//**
RM	=	rm-f				**//define el comando para eliminar archivos //**
CFLAGS	=	-Wall -Wextra -Werror		**//establece banderas de compilacion//**

ALL	=	$(NAME)				**//define una lista de todos los objetivos a generar//**
$(NAME):$(OBJS)					**//regla para generar el archivo objeto//**
	ar	rcs	$(NAME)	$(OBJS)		**//accion para crear el archivo estatico//**
clean:						**//objetivo para eliminar archivos objeto//**
	$(RM) $(OBJS)				**//objetivo para eliminar archivos objeto//**
fclean:	clean					**//objetivo para eliminar archivos generados//**
	$(RM) $(NAME)				**//accion para eliminar el archivo generados//**
re:	fclean	$(NAME)				**//objetivo para reconstruir el proyecto//**

.PHONY: all	clean fclean re			**//indica que son objetivos especiales y no archivos//**
