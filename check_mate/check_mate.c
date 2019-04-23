/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:47:17 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/22 18:40:54 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_mate.h"

int is_pieces(char c)
{
	return (c == 'P' || c == 'R' || c == 'Q' || c == 'B');
}

int check_row(char **board, x, y)
{
	int i;
	int board_size;

	board_size = 0;
	while(board[1][i] != '\0')
	{
		i++;
	}
	board_size = i - 1;
	while(y <= board_size)
	{
		while(x <= board_size)
		{
			if(is_pieces(board[y][x]))
				return(1);
			x++;
		}
		y++;
	}
	return(0);
}

int main(int argc, char **argv)
{
	char **pos_k;
	int i;
	int j;
	j = 0;
	i = 0;
	while(i < argc)
	{
		while(argv[i][j] != '\0')
		{
			if (argv[i][j] == 'K')
				break;
			j++;
		}
		if (argv[i][j] == 'K')
			break;
		i++;
	}
}
