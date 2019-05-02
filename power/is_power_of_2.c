int	is_power_of_2(unsigned int n)
{
	if (n == 1)
		return (1);
	while (n > 0)
	{
		if (n%2 != 0 && n != 1)
			return (0);
		n = n/2;
	}
	return (1);
}
