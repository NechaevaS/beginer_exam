/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 11:36:08 by exam              #+#    #+#             */
/*   Updated: 2019/04/09 13:55:07 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int count_words(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
		while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			count++;
		i++;
	}
	return (count);

}
int	main(int argc, char **argv)
{
	int i;
	int j;
	int n;
	char *str;
	char **words;


	str = argv[1];
	if (argc == 2)
	{
		words = (char **)malloc(sizeof(char *) * count_words(argv[1]));
		i = 0;
		j = 0;
		n = 0;
		while (str[i] != '\0')
		{
			if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
			{
				words[n] = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
				j = 0;
				while (str[i] != ' ' && str[i] != '\0')
				{
					words[n][j] = str[i];
					i++;
					j++;
				}
				words[n][j] = '\0';
				n++;
			} 
			i++;
		}
		n--;
		while (n >= 0)
		{
			j = 0;
			while (words[n][j] != '\0')
			{
				write (1, &words[n][j], 1);
				j++;
			}
			if (n != 0)
				write(1, " ", 1);
			n--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
