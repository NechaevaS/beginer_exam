/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 16:09:42 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/22 17:13:02 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	rev_bits(unsigned char octet)
{
	int i;
	unsigned char rev;

	i = 0;
	while(i < 8)
	{
		rev = (octet & 1) | (rev << 1);
		octet = octet >> 1;
		i++;
	}
	return(rev);
}
