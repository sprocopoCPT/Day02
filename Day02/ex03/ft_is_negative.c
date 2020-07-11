/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:37:01 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/11 15:25:18 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n <  0) 
	{  
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int main(void)
{
	ft_is_negative(-1);
}

