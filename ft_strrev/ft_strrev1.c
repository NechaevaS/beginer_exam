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
	char	*res;
	char	tmp;
	int		i;
	int		l;
	
	res = str;
	l = ft_strlen(str);
	i = 0;
	while (i < l / 2)
	{
		tmp = str[i];
		str[i] = str[l - i - 1];
		str[l -i -1] = tmp;
		i++;
	}
	return (res);
}

