/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:47:27 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/11 15:12:53 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)

{
	write (1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
