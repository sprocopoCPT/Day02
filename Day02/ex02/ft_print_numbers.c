/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:48:53 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/11 15:20:59 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

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

int main(void);
{
	ft_print_numbers();
}
