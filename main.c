/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalmei <danalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:05:03 by danalmei          #+#    #+#             */
/*   Updated: 2023/04/28 19:38:02 by danalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main()
{
    char    *str;
    char    ch;
    int		num;
	unsigned int	u_num;

    ch = 'a';
    str = "Hello world!";
	num = 23456;
	u_num = 23456;
	printf("test -> %");
    ft_printf("This is a str -> %s", str);
    ft_printf("This is a char -> %c", ch);
    ft_printf("This is a num -> %i", num);
    ft_printf("This is a unsigned num -> %u", u_num);
}