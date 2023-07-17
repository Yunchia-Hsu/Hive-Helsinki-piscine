int	ft_atoi(char *str)
{
	int	i;  
	int	j;  //把字母轉成數字
	int	x;  //計算-有幾個

	i = 0;
	x = 0;
	j = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			x++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + str[i] - 48;
		i++;
	}
	if (x % 2 == 1)
		j = j * -1;
	return (j);
}
