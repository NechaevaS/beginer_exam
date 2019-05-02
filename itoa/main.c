/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:54:35 by snechaev          #+#    #+#             */
/*   Updated: 2019/04/25 11:56:40 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char* ft_itoa(int nbr);

int main()
{
    printf("%s\n", ft_itoa(23));
    printf("%s\n", ft_itoa(0));
    printf("%s\n", ft_itoa(-5623));
    printf("%s\n", ft_itoa(-2147483648));
    return (0);
}
