#include <unistd.h>

void	print(char *value)
{
	int		i;
	char	x;

	i = 0;
	while (value[i])
	{
		x = value[i];
		write(1, &x, 1);
		i++;
	}
}
