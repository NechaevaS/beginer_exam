/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 11:21:49 by exam              #+#    #+#             */
/*   Updated: 2019/05/07 13:24:45 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_wsps(char c)
{
	return(c == ' ' || c == '\n' || c == '\t');
}

int	 count_words(char *str)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		if (!is_wsps(str[i]) && (i == 0 || is_wsps(str[i - 1])))
			count++;
		i++;
	}
	return (count);
}
char    **ft_split(char *str)
{
	char **res;
	int i;
	int j;
	int k;

	if (!(res = (char **)malloc(sizeof(char *) * count_words(str) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (is_wsps(str[i]))
		{
			i++;
		}
		if (!is_wsps(str[i]) && (i == 0 || is_wsps(str[i - 1])))
		{
			if (!(res[j] = (char *)malloc(sizeof(char) * 256)))
				return (NULL);
			if (str[i] == '\0')
			{
				res[j] = NULL;
				return(res);
			}
			k = 0;
			while(!is_wsps(str[i]) && str[i] != '\0')
			{
				res[j][k] = str[i];
				k++;
				i++;
			}
			res[j][k] = '\0';
			j++;
		}
		i++;
	}
	res[j] = NULL;
	return(res);
}
