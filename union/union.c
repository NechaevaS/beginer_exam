/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 13:47:00 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/02 14:28:47 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

 int find_dbl(char *str, char c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	char *s1;
	char *s2;
	char res[256];

	i = 0;
	s1 = argv[1];
	s2 = argv[2];
	if (argc == 3)
	{

		while (*s1)
		{
			if (!find_dbl(res, *s1))
			{
				res[i] = *s1;
				i++;
			}
			s1++;
		}
		while (*s2)
		{
			if (!find_dbl(res, *s2))
			{
				res[i] = *s2;
				i++;
			}
			s2++;
		}
		i = 0;
		while (res[i] != '\0')
		{
			write(1, &res[i], 1);
			i++;
		}

	}
	write (1, "\n", 1);
	return (0);
}

