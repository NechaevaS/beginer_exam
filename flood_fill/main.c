/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:57:13 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/15 17:20:29 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include "flood_fill.h"
void  flood_fill(char **tab, t_point size, t_point begin);
void print(char **arr, t_point size)
{
    int i;

	i = 0;
    while (i < size.y)
    {
            write(1, arr[i], size.x * 2 - 1);
            write(1, "\n", 1);
            i++;
    }
}

int main(void)
{
	t_point size = {8, 5};
	t_point begin = {5, 4};
	char *zone[] = {
		strdup("1 1 1 1 1 1 1 1"),
		strdup("1 0 0 0 1 0 0 1"),
		strdup("1 0 0 1 0 0 0 1"),
		strdup("1 0 1 1 0 0 0 1"),
		strdup("1 1 1 0 0 0 0 1"),
	};

	print(zone, size);
	flood_fill(zone, size, begin);
	write(1, "\n", 1);
	print(zone, size);
	return (0);
}
