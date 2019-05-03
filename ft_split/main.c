/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:06:39 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/02 18:56:20 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    **ft_split(char *str);

int	main()
{
	char *str = "	hi it	is\nme  ";
		printf("%s\n", str);
	char **res = ft_split(str);
	int i = 0;

	while(res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
