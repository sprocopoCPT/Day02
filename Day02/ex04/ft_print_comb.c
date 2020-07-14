/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:46:00 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/14 11:09:25 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
write (1, &c, 1);	
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	
	a  = '0';
	while (a  <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c  = b + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a < '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}
