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

int	ft_ptrlen(unsigned long long ptr)
{
	int	c;

	c = 0;
	while (ptr != 0)
	{
		c++;
		ptr /= 16;
	}
	return (c);
}

void	ft_write_ptr(unsigned long long ptr)
{
	int	c;
	int	index;

	c = 0;
	index = 0;
	if (ptr >= 16)
	{
		ft_write_ptr(ptr / 16);
		ft_write_ptr(ptr % 16);
	}
	else 
	{
		index = ptr % 16;
		ft_putchar_fdp(HEX_L[index], 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 2;
	ft_putstr_fdp("0x", 1);
	if (ptr == 0)
		print_len += ft_putchar_fdp('0', 1);
	else
	{
		ft_write_ptr(ptr);
		print_len += ft_ptrlen(ptr);
	}
	return (print_len);
}