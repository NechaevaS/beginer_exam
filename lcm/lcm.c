/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 13:03:30 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/06 13:44:20 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;
	unsigned int hcf;
	unsigned int i;
	unsigned int atmp;
	unsigned int btmp;

	if (a == 0 || b == 0)
		return (0);
	i = 1;	
	atmp = a;
	btmp = b;
	while (i <= a || i <= b)
	{
		if (!(atmp % i) && !(btmp % i))
			hcf = i;
		i++;
	}
	lcm = a * b / hcf;
	return (lcm);
}
