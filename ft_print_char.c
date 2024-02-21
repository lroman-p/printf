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
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *str, ...); 	**//Declaracion de la funcion ft_printf//**

int ft_print_char (int character)		**//dedfinicion de la funcion print_char//**
{
	return (write(1, &character, sizeof(char)));	**//escribe el caracter en la salida estandar//**
}
int	main (void)
{
	char character = 'A';		**//declara una variable de tipo char llamada character y le asigna el valor 'A'//**

	ft_print_char(character);	**//llama a la funcion print_char con el caracter almacenado en la variable character//** 
	return(0);
}
