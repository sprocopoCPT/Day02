/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:18:46 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/14 12:12:03 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
write (1, &c, 1);
}

void ft_print_comb2(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{	
			while (c <= '9')
			{
				while (d <= '9')
				{
					if ((a < c) || (a == c && b < d))
					{	
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(' ');
						ft_putchar(c);
						ft_putchar(d);
						if (a != '9' || b != '9' || c != '9' || d != '9')
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					}
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
    b = '0';
    a++;
	}
}

int main (void)
{
	ft_print_comb2();
	return 0;
}

