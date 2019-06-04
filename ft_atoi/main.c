/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 14:26:19 by snechaev          #+#    #+#             */
/*   Updated: 2019/06/04 13:39:02 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	printf ("%s\n", "test atoi");
	printf ("expect %d\n", atoi("-23"));
	printf ("result %d\n", ft_atoi("-23"));
	printf ("%s\n", "");
	printf ("expect %d\n", atoi("23abc"));
	printf ("result %d\n", ft_atoi("23abc"));
	printf ("%s\n", "");
	printf ("expect %d\n", atoi("0"));
	printf ("result %d\n", ft_atoi("0"));
	printf ("%s\n", "");
	printf ("expect %d\n", atoi("2345678"));
	printf ("result %d\n", ft_atoi("2345678"));
	printf ("%s\n", "");
	printf ("expect %d\n", atoi("+2345678"));
	printf ("result %d\n", ft_atoi("+2345678"));
	printf ("%s\n", "");
	printf ("expect %d\n", atoi("-2147483648"));
	printf ("result %d\n", ft_atoi("-2147483648"));
	printf ("%s\n", "");
	return (0);
}
