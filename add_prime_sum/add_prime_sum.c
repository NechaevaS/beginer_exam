/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 16:50:44 by snechaev          #+#    #+#             */
/*   Updated: 2019/03/26 18:31:12 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int	i;
	int res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '0' || str[i] >= '9')
			return (0);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int is_prime(int num)
{
	int i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

void	print_nbr(int num)
{
	char	c;

	if (num >= 10)
	{
		print_nbr(num / 10);
		c = num % 10  + '0';
	}
	else
		c = num + '0';
	write(1, &c, 1);
}

int main(int argc, char ** argv)
{
	int sum;
	char *str;
	int num;

	str = argv[1];
	if (argc != 2 || str[0] == '-')
	{
		write(1, "0\n", 2);
		return(0);
	}
	num = ft_atoi(str);
	
	sum = 0;
	while (num >= 2)
	{
		if (is_prime(num))
			sum = sum + num;
		num--;
	}
	print_nbr(sum);
	return(0);
}
