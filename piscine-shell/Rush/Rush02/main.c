#include<unistd.h>

int	fill(int val);
int	ft_atoi(char *str);

int	valid_a(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	if (i > 37)        //在valid_a 函式，為什麼要檢查字串的長度是否超過 37
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc < 2 || argc > 3)
		write(1, "Error\n", 6);
	if (argc == 2)
	{
		if (valid_a(argv[1]) == 0)
			write(1, "Error\n", 6);
	}
	fill(ft_atoi(argv[1]));
	return (1);
}
