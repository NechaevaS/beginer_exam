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

void  fill(char **tab, t_point size, t_point begin, char c)
{
	t_point new;

	if(begin.x >= size.x || begin.y >= size.y)
		return ;
	if (ELEM(tab, begin.x, begin.y) != c)
		return ;

	ELEM(tab, begin.x, begin.y) = 'F';

	new.x = begin.x + 1;
	new.y = begin.y;
	fill(tab, size, new, c);	
	
	new.x = begin.x - 1;
	new.y = begin.y;
	fill(tab, size, new, c);	
	
	new.x = begin.x;
	new.y = begin.y + 1;
	fill(tab, size, new, c);	
	
	new.x = begin.x;
	new.y = begin.y - 1;
	fill(tab, size, new, c);	

}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, ELEM(tab, begin.x, begin.y));
}

