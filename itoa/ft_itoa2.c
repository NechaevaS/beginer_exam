/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:12:54 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/20 14:17:56 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void itoa_help(unsigned int nbr, int i, char *str)
{

	if(nbr > 9)
	{
			itoa_help(nbr / 10, i - 1, str);
			str[i] = nbr % 10 + '0';
	}
	else
		str[i] = nbr %10 + '0';
}
char	*ft_itoa(int nbr)
{
	char *res;
	int i;
	unsigned int count;
	unsigned int unbr;

	count = nbr;
	i = 1;
	while(count)
	{
		count = count / 10;
		i++;
	}
	if (nbr < 0)
	{
		res = (char *)malloc(sizeof(char) * i + 2);
		res[i + 1] = '\0';
		unbr = nbr * -1;
		res[0] = '-';
		itoa_help(unbr, i, res);
		return(res);
	}
	else
	{
		res = (char *)malloc(sizeof(char) * i + 1);
		res[i] = '\0';
		i--;
		itoa_help(nbr, i, res);
		return(res);
	}
}
