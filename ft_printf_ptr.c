/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 21:27:55 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/29 21:51:33 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_shift_pos(unsigned long shift_val, int *c)
{
	int
	w = 0;
	while(w < sizeof(unsigned  * 2 - 1 - c)
	{
		shift_val /= 16;
		w++;
	}
}

int	ft_print_ptr(unsigned   ptr)
{
	unsigned long 	shift_val;
	char			*str_ptr;
	unsigned long 	index;
	unsigned long 	c;
	unsigned long 	w;

	c = 0;
	w = 0;
	str_ptr = (char *)malloc(sizeof(ptr) * 2 + 3);
	if (!str_ptr)
		return (0);
	str_ptr[0] = '0';
	str_ptr[1] = 'x';
	while (c < sizeof(str_ptr) * 2 - 1)
	{
		shift_val = ptr;
		w = 0;
		while (w < sizeof(ptr * 2 - c) - 3)
		{
			shift_val /= 16;
			w++;
		}		
		c++;
		index = shift_val % 16;
		str_ptr[2 + c] = HEX_L[index];
	}
	str_ptr[c] = '\0';
	write(1, str_ptr, c);
	return(c);
}
/*
//printf("Iteration -> %llu: shift_value -> %llu\n", c, (unsigned long long)shift_val);
*/