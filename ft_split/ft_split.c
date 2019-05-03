/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 13:36:31 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/02 18:56:06 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int is_wsps(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		if (!is_wsps(str[i]) && (is_wsps(str[i - 1]) || i == 0))
			count++;
		i++;
	}
	return (count);
}
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (0);
}
char    **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **res;
	int nwords;

	nwords = count_words(str);
	i = 0;
	j = 0;
	if (!(res = (char **)malloc(sizeof(char *) * nwords + 1)))
		return (NULL);
	while (str[i] != '\0')
	{
		while(is_wsps(str[i]))
		{
			i++;
		}
		if (!is_wsps(str[i]) && (i == 0 || is_wsps(str[i - 1])))
		{
			if (!(res[j] =(char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
				return (NULL);
			if(str[i] == '\0')
			{
				res[j] = NULL;
				return (res);
			}
			k = 0;
			while(!is_wsps(str[i]))
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
	return (res);
}
