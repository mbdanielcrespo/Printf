/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:05:03 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/29 21:36:05 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
    char    *str;
    char    ch;
    int		num[3];
	unsigned int	u_num[3];

    ch = 'a';
    str = "Hello world!";
	num[0] = 23456;
    num[1] = 2147483647;
    num[2] = -2147483648;
	u_num[0] = 23456;
    u_num[1] = 0;
    u_num[2] = 4294967295; // Output is wrong
    printf("  Lenght -> %d\n", ft_printf("This is a str -> %s", str));
    printf("  Lenght -> %d\n", ft_printf("This is a char -> %c", ch));
    printf("  Lenght -> %d\n", ft_printf("This is a num -> %i", num[0]));
    printf("  Lenght -> %d\n", ft_printf("This is a num -> %i", num[1]));
    printf("  Lenght -> %d\n", ft_printf("This is a num -> %i", num[2]));
    printf("  Lenght -> %d\n", ft_printf("This is a unsigned num -> %u", u_num[0]));
    printf("  Lenght -> %d\n", ft_printf("This is a unsigned num -> %u", u_num[1]));
    printf("  Lenght -> %d\n", ft_printf("This is a unsigned num -> %u", u_num[2]));
    printf("  Lenght -> %d\n", ft_printf("This is a ptr -> %p", &num));
}