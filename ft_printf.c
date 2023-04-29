/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:09:57 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/29 21:57:18 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	unsigned long	shift_val;
	char				*str_ptr;
	unsigned long	index;
	unsigned long	c;
	unsigned long	w;

	c = 0;
	w = 0;
	str_ptr = (char *)malloc(sizeof(ptr) * 2 + 2);
	if (!str_ptr)
		return (0);
	str_ptr[0] = '0';
	str_ptr[1] = 'x';
	while (c < sizeof(ptr) * 2 + 2)
	{
		shift_val = ptr;
		w = 0;
		c++;
		while (w < sizeof(unsigned long) * 2 - c)
		{
			shift_val /= 16;
			w++;
		}
		printf("Iteration -> %lu: shift_value -> %lu: w iterations -> %lu\n", c, (unsigned long)shift_val, w);
		index = shift_val % 16;
		str_ptr[2 + c] = HEX_L[index];
	}
	str_ptr[c] = '\0';
	write(1, str_ptr, c);
	return(c);
}


int	ft_is_format(va_list args, char next_c)
{
	int	print_len;

	print_len = 0;
	if (next_c == 'c')
		print_len += (int)ft_putchar_fdp((char)va_arg(args, int), 1);
	else if (next_c == 's')
		print_len += ft_putstr_fdp(va_arg(args, char *), 1);
	else if (next_c == 'i')
		print_len += ft_putnbr_fdp(va_arg(args, int), 1);
	else if (next_c == 'u')
		print_len += ft_putnbr_fdp(va_arg(args, unsigned int), 1);
	/*
	else if (next_c == 'x')
					ft_print_hex(va_arg(args, uintptr_t), 'x');
	else if (next_c == 'X')
					ft_print_hex(va_arg(args, uintptr_t), 'X');
	else if (next_c == '%')	
					ft_putchar_fd('%');
	*/
	else if (next_c == 'p')
		ft_print_ptr(va_arg(args, unsigned long long));
	//else if (next_c == 'd')
		//ft_putnbr_fd();
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		print_len;
	int		c;
	va_list	args;

	print_len = 0;
	c = 0;
	va_start(args, str);
	while (str[c] != '\0')
	{
		if (str[c] == '%' && str[c + 1] != '\0')
		{
			print_len += ft_is_format(args, str[c + 1]);
			c++;
		}
		else
		{
			write(1, &str[c], 1);
			print_len++;
		}
		c++;
	}

	va_end(args);
	return (print_len);
}
