/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_basics.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:06:59 by lroman-p          #+#    #+#             */
/*   Updated: 2024/02/18 15:45:14 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"						

int	ft_printf(const char *str, ...); 	

int ft_print_char (int character)		
{
	return (write(1, &character, sizeof(char)));	
}
