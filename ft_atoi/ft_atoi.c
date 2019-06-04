/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snechaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 13:51:28 by snechaev          #+#    #+#             */
/*   Updated: 2019/06/04 13:39:21 by snechaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return(0);
		else
			i++;
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int num;
	int i;
	int neg;

	i = 0;
	num = 0;
	neg = 1;
	if (ft_strncmp(str,"-2147483648", 11))
		return (-2147483648);
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}
