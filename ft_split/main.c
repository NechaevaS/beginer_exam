/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 14:06:39 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/07 13:11:48 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    **ft_split(char *str);

int	main()
{
	char *str = "HhvZKsp6";
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
