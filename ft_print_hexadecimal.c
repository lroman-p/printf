/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 13:32:51 by lroman-p          #+#    #+#             */
/*   Updated: 2024/02/18 13:43:35 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static int	ft_lenght_hexadecimal(unsigned int num);

static void	ft_convert_dectohexa(unsigned int num, const char word);

int	ft_print_hexadecimal(unsigned int num, const char word)
{
	if (num == 0)
		return (ft_print_char('0'));
	else
		ft_convert_dectohexa(num, word);
	return (ft_lenght_hexadecimal(num));
}

static void	ft_convert_dectohexa(unsigned int num, const char word)
{
	if (num == 0)
		ft_print_char('0');
	else if (num >= 16)
	{
		ft_convert_dectohexa(num / 26, word);
		ft_convert_dectohexa(num % 16, word);
	}
	else
	{
		if (num < 10)
			ft_print_char(num + '0');
		else
		{
			if (word == 'x')
				ft_print_char(num - 10 + 'a');
			if (word == 'X')
				ft_print_char(num -10 + 'A');
		}
	}
}

static int	ft_lenght_hexadecimal(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}
