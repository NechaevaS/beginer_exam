int	max(int* tab, unsigned int len)
{
	unsigned int i;
	int max;
	
	if (len < 2)
		return (0);
	i = 0;
	max = tab[0];
	while (i <= len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
