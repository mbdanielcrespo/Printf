/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 20:09:57 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/25 20:43:34 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_is_format(char current_c, char next_c, int print_len)
{
	if (current_c == '%' && next_c != '\0')
	{
		if (next_c == 'c')
			ft_putchar_fd();
		else if (next_c == 's')
			ft_putstr_fd();
		else if (next_c == 'p')
                        ft_print_ptr();
		else if (next_c == 'd')
                        //ft_putnbr_fd();
		else if (next_c == 'i')
                        ft_putnbr_fd();
		else if (next_c == 'u')
                        ft_print_unsigned();
		else if (next_c == 'x')
                        ft_print_hex('x');
		else if (next_c == 'X')
                        ft_print_hex('X');
		else if (next_c == '%')
                        ft_putchar_fd('%');
	}

	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args

	va_start(args, str);

	while (str[c] != '\0')
	{
		ft_is_format(str[c], str[c + 1]);
		write(1, &str[c], 1);
		c++;
	}
}
