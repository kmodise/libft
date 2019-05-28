
int	ft_atoi(const char *str)
{
	int	result;
	int 	i;
	int	p_m;

	result = 0;
	i = 0;
	p_m = 0;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	if (str[i] == '-')
	{
		p_m = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * p_m);
}
