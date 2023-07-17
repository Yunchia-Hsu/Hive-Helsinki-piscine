int	dig_num(int num)  //計算是輸入的數字有幾位數  為什麼要這樣用？
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	count_rows(char *buffer)  //計算字串的數量 
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			count++;
		i++;
	}
	return (count);
}
