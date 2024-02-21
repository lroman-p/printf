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
		ft_print_char.c ft_print_nbr.c ft_print_unsigned.c ft_print_string.c\    
		ft_print_hexadecimal.c	ft_print_pointers.c

OBJS	=	$(SCRD:.c=.o)			

NAME	=	libftprintf.a			

CC	=	gcc				
RM	=	rm-f				
CFLAGS	=	-Wall -Wextra -Werror		

ALL	=	$(NAME)				
$(NAME):$(OBJS)					
	ar	rcs	$(NAME)	$(OBJS)		
clean:						
	$(RM) $(OBJS)				
fclean:	clean					
	$(RM) $(NAME)				
re:	fclean	$(NAME)				

.PHONY: all	clean fclean re			
