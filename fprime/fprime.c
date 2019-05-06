/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:22:07 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/06 16:44:44 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int n;
	int i;

	i = 1;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n > 0)
		{
			if (n == 1)
				printf("1");
			while (i <= n)
			{
				i++;
				if(n % i == 0)
				{
					n = n / i;
					printf("%d", i);
					i--;
					if (n > i)
						printf("%c", '*');	
				}
			}
		}
	}
	printf("%s", "\n");
	return (0);
}
