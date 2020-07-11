/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprocopo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:43:20 by sprocopo          #+#    #+#             */
/*   Updated: 2020/07/11 15:14:36 by sprocopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_reverse_alphabet(void)

{
	write (1, "zyxwvutsrqponmljkihgfedcba", 26);
}

int main(void)
{
	ft_print_reverse_alphabet();
}

