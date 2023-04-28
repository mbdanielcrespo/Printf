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



void	ft_is_format(int print_len, args)
{
	if (current_c == '%' && next_c != '\0')
	{
		if (next_c == 'c')
			print_len += ft_putchar_fdp(va_arg(args, char));
		else if (next_c == 's')
			print_len += ft_putstr_fdp(va_arg(args, char *));
		else if (next_c == 'i')
			print_len += ft_putnbr_fdp(va_arg(args, int));
		else if (next_c == 'u')
			print_len += ft_putnbr_fdp(va_arg(args, unsigned int));
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
	}
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	int		print_len;
	va_list	args

	va_start(args, str);

	while (str[c] != '\0')
	{
		if (str[c] == '%' && str[c + 1] != '\0')
		{
			ft_is_format(print_len, args);
		}
		write(1, &str[c], 1);
		c++;
	}

	va_end(args);
}
