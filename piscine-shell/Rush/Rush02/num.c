#include <stdio.h>
#include <unistd.h>

int			dig_num(int num);
void		check(int num, int *key, char **value);

long int	rec_pow(long int nb, long int power)
{
	if (power < 0)
		return (1);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		return (nb * rec_pow(nb, power - 1));
	}
	return (nb);
}

void	modu_0(long int num, int *key, int c, char **value)
{
	long int	d;

	d = num % rec_pow(10, c);
	d /= rec_pow(10, c - 1);
	if (d != 0)
	{
		check(d, key, value);
		check(100, key, value);
	}
}

void	modu_1(long int num, int *key, int c, char **value)
{
	long int	d;

	d = num % rec_pow(10, c);
	d /= rec_pow(10, c - 1);
	if (d != 0)
		check(d, key, value);
	d = num % rec_pow(10, c + 2);
	d /= rec_pow(10, c - 1);
	if (c > 1 && num % rec_pow(10, c + 2) && d > 0)
		check(rec_pow(10, c - 1), key, value);
}

void	modu_2(long int num, int *key, int c, char **value)
{
	long int	d;

	d = num % rec_pow(10, c);
	d /= rec_pow(10, c - 2);
	if (d <= 20 && d > 9)
	{
		check(d, key, value);
		if (c > 2)    // 確認非最後兩位數
			check(rec_pow(10, c - 2), key, value);
		c--;
	}
	else
	{
		if (d - d % rec_pow(10, 1) != 0)
			check(d - d % rec_pow(10, 1), key, value);  // 如果大於20就去除最面一位數 找出英文字
	}
}

void	num(long int num, int *key, char **value)
{
	int	c;

	c = dig_num(num);
	while (c > 0)
	{
		if (c % 3 == 0)
		{
			modu_0(num, key, c, value);
		}
		if (c % 3 == 1)
		{
			modu_1(num, key, c, value);
		}
		if (c % 3 == 2)
		{
			modu_2(num, key, c, value);
		}
		c--;
	}
}
