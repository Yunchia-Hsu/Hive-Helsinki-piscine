#include<unistd.h>

void	print(char *value);

void	check(int num, int *key, char **value)
{
	int	i;

	i = 1;
	while (i < 1000)
	{
		if (key[i] == num)
		{
			print(value[i]);
			write(1, " ", 1);
		}
		i++;
	}
}
