/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 17:47:17 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/23 17:17:46 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "check_mate.h"

int is_pieces(char c)
{
	return (c == 'P' || c == 'R' || c == 'Q' || c == 'B');
}

int check_row(char **board, pos *king, int x, int y)
{
	int i;
	int j;
	int n;
	int board_size;
	
	i = king->y;
	board_size = 0;
	n = 0;
	while(board[1][n] != '\0')
	{
		n++;
	}
	board_size = n - 1;

//	if (x || y)
//	{
		while(i >= 0 && i <= board_size)
		{
			j = king->x;
	printf("k x  %d\n",j);
			while(j >= 0 && j <= board_size)
			{
				if(is_pieces(board[i][j]))
				{
	printf("%d %d\n",i, j);
					king->c = board[i][j];
	printf("k c  %c\n",king->c);
				//	if (board[i][j] == 'P' && (king->y + 1 == i && (king->x + 1 == j || king->x - 1 == j)))
				//		return(1);
				//	else if (board[i][j] == 'P' &&  (king->y + 1 != i && (king->x + 1 != j || king->x - 1 != j)))
				//		return(0);
					else
						return(1);
				}
				if (x > 0)
					j++;
				if (x < 0)
					j--;
				if (x == 0)
					j = king->x;

			}
			if(y > 0)
				i++;
			if(y < 0)
				i--;
			if (y == 0)
				i = king->y;
		}
//	}
	
	return(0);
}

void find_k(char **argv, pos *king)
{
	int i;
	int j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if (argv[i][j] == 'K')
			{
				king->x = j;
				king->y = i - 1;
				return ;
			}
			j++;
		}
		i++;
	}
}
int main(int argc, char **argv)
{
	pos *king;
	
	if (argc > 2)
	{
		king = (pos *)malloc(sizeof(pos));

		find_k(argv, king);
	printf("k yx %d  %d\n",king->y, king->x);
/*		if (check_row(argv, king, 1, 0) && (king->c == 'R' || king->c == 'Q'))
		{
			write(1, "Success\n", 8);
			return(0);
		}
		else if (check_row(argv, king, -1, 0) && (king->c == 'R' || king->c == 'Q'))
		{
			write(1, "Success\n", 8);
			return(0);
		}*/
		if (check_row(argv, king, 0, 1) && (king->c == 'R' || king->c == 'Q'))
		{
			write(1, "Success\n", 8);
			return(0);
		}
/*		else if (check_row(argv, king, 0, -1) && (king->c == 'R' || king->c == 'Q'))
		{
			write(1, "Success\n", 8);
			return(0);
		}
		else if (check_row(argv, king, 1, 1) && (king->c == 'B' || king->c == 'Q'|| king->c == 'P'))
		{
			write(1, "Success\n", 8);
			return(0);
		}
		else if (check_row(argv, king, -1, 1) && (king->c == 'B' || king->c == 'Q'|| king->c == 'P'))
		{
			write(1, "Success\n", 8);
			return(0);
		}
		else if (check_row(argv, king, -1, -1) && (king->c == 'B' || king->c == 'Q' ))
		{
			write(1, "Success\n", 8);
			return(0);
		}
		else if (check_row(argv, king, 1, -1) && (king->c == 'B' || king->c == 'Q'))
		{
			write(1, "Success\n", 8);
			return(0);
		}*/
		else
			write(1, "Fail", 4);
	}
	write(1, "\n", 1);
	return (0);
}
