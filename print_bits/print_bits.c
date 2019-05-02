/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 13:34:54 by snechaev          #+#    #+#             */
/*   Updated: 2019/01/26 14:36:42 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	mask;

	i = 0;
	while (i < 8)
	{
		mask = 0b10000000 >> i;
		if (octet & mask)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
	}
}
