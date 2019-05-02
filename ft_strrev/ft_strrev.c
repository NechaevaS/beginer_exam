#include <stdio.h>
int ft_strlen(char *str)
{
	int i;
	int cnt;

	i = 0;
	cnt =0;
	while (str[i] != '\0')
	{
		cnt = cnt + 1;
		i++;
	}
	return (cnt);
}

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int 	j;
	char	*new;

	j = ft_strlen(str) - 1;
	i = 0;
	new = str;
	while (i <= ft_strlen(str) / 2 && j >= ft_strlen(str) / 2)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (new);
}

