/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:18:55 by lroman-p          #+#    #+#             */
/*   Updated: 2024/03/03 13:28:25 by lroman-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

int	ft_select_format(va_list argument, const char word)
{
	int	size;

	size = 0;
	if (word == 'c')
		size += ft_printf_char(va_arg(argument, int));
	else if (word == 's')
		size += ft_printf_string(va_arg(argument, char *));
	else if (word == 'd' || word == 'i')
		size += ft_printf_nbr(va_arg(argument, int));
	else if (word == 'u')
		size += ft_printf_unsigned(va_arg(argument, unsigned int));
	else if (word == 'x' || word == 'X')
		size += ft_printf_hexadecimal(va_arg(argument, unsigned int), word);
	else if (word == 'p')
		size += ft_printf_pointer(va_arg(argument, unsigned long long));
	else if (word == '%')
		size += ft_printf_char('%');
	return (size);
}

int	ft_printf(const char *str, ...)
{
	int		i;		/*se declara una variable entera i que se usara como indice para recorrer la cadena str*/
	int		size;		/*se declara una variable size que se usara para almacenar el tamaño de los caracteres impresos*/
	va_list	argument;		/* se declara una variable tipo va_list llamada argument, que sirve para manejar los argumentos variables*/

	if (!str)			/*se verifca si la cadena formato str esta vacia. se imprime 0, indicando que no se imprimio ningun caracter*/
		return (0);
	i = 0;				/*se inicializan las varibles i y size en 0*/
	size = 0;
	va_start(argument, str);	/*se inicializa argument para que apunten al primer argumento de la variable despues de str*/
	while (str[i])			/*se inicia un bucle while que recorre a cadena formato str hasta encontrar el caracter nulo \0, que indica el final de la cadena*/
	{
		if (str[i] == '%')	/*se verifica su e caracter actual de la cadena es un % , lo que indica un especificador de formato*/
		{
			size += ft_select_format(argument, str[i + 1]);		/*si se encuentra un %  , se llama a la funcion ft_select_format para procesar el siguiente caracter despues del % y se suma el resultado al tamaño total*/
			i++;							/* se incrementaa i para pasar al siguiente caracter de la cadena*/
		}
		else								/*si el caracter no es % , se llama a ft_print_char para imprimirlo y se suma al tamaño total*/

		size += ft_printf_char(str[i]);
		i++;								/*se incrementa i para pasar al siguiente caracter de la cadena*/
	}
	va_end(argument);		/*se finaliza el uso de la lsita de argumentos variables*/			
	return (size);			/*la funcion retorna el tamaño total de los caracteres impresos*/
}
