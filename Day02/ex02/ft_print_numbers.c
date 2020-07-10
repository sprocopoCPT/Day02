/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:48:53 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/10 09:33:40 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_print_numbers(void)
{
	char    n;

	n = 0;

	while (n <= 9)
	{
		ft_putchar(n);
		n = n + 1;
	}
}

