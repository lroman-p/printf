/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:35:17 by lroman-p          #+#    #+#             */
/*   Updated: 2024/02/17 12:46:01 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...);

int	ft_print_string(char *str)
{
	int	size;

	size = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		size += ft_print_char(*str);
		str++;
	}
	return (size);
}
