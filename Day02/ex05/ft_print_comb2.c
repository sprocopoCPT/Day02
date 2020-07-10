/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:18:46 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/10 10:50:15 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1,&c,1);
}

void ft_putnbr(int nbr)
{

	ft_putchar('&nbr');
}

int main (void)
{
	int nbr;
	nbr = 6;
		ft_putnbr(nbr);
}

