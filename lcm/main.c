/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 13:37:04 by snechaev          #+#    #+#             */
/*   Updated: 2019/05/06 13:48:38 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b);

int	main()
{
	int a = 24;
	int b = 3;

	printf("a %d b %d\n", a, b);
	printf("%d\n",lcm(a, b));
	return (0);
}
