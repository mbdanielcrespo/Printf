/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:09:57 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/28 19:30:51 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_is_format(va_list args, char next_c)
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
					ft_print_hex('x');
	else if (next_c == 'X')
					ft_print_hex('X');
	else if (next_c == '%')
					ft_putchar_fd('%');
	else if (next_c == 'p')
		ft_print_ptr(va_arg(args, char));
	else if (next_c == 'd')
		//ft_putnbr_fd();
	*/
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
