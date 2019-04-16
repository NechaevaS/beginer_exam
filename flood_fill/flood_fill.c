/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:22:48 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/15 17:35:11 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void  flood_fill(char **tab, t_point size, t_point begin)
{
	char c;
	
	c = ELEM(tab, begin.x, begin.y);
	ELEM(tab, begin.x, begin.y) = 'F';
	if(begin.x > size.x || begin.y > size.y)
		exit;
	if(ELEM(tab, begin.x + 1, begin.y) == c)
	   flood_fill(tab,size,begin)	


	i = begin.y;
	while (i >= size.y && tab[i][j] == c)
	{
		j = begin.x;	
		while (j >= size.x && tab[i][j] == c)
		{
			if(tab[i][j] == c)
				tab[i][j] = 'F';
			j++;
		}
		i++;
	}
	i = begin.y;
	while (i >= 0 && tab[i][j] == c)
	{
		j = begin.x;	
		while (j > 0 && tab[i][j] == c)
		{
			if(tab[i][j] == c)
				tab[i][j] = 'F';
			j--;
		}
		i--;
	}

}

