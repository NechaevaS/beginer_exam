/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 10:30:19 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/25 12:02:25 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char* itoa_helper(int n, char* p)
{
	int t;
   
	t = n / 10;
	if (t)
		p = itoa_helper(t, p);

	*p = '0' + (n % 10);
	return (p + 1);
}

char* ft_itoa(int nbr)
{
	char* p;
	char *t;

	p = (char*)malloc(11);
	if (!p)
		return (NULL);

	if (nbr == -2147483648)
	{
		return ("-2147483648");
	}
	if (nbr < 0)
   	{
		*p = '-';
		t = itoa_helper(-nbr, p+1);
	}
	else 
		t = itoa_helper(nbr, p);
	*t = '\0';
	printf("\n %s \n", t);
	return (p);
}
