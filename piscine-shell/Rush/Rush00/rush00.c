/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:21:54 by alli              #+#    #+#             */
/*   Updated: 2023/07/01 19:22:01 by alli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_get_first_row(int x, int j);
void	ft_get_last_row(int x, int y, int i, int j);
void	get_rows(int x, int y, int i, int j);

void	ft_get_first_row(int x, int j)
{
	if (j == 1)
	{
		ft_putchar('/');
	}
	else if (j == x)
	{
		ft_putchar('\\');
	}
	else
	{
		write(1, "*", 1);
	}
}

void	ft_get_last_row(int x, int y, int i, int j)
{
	if (i == y && j == x)
	{
		ft_putchar('/');
	}
	else if (i == y && j == 1)
	{
		ft_putchar('\\');
	}
	else
	{
		ft_putchar('*');
	}
}

void	get_rows(int x, int y, int i, int j)
{
	if (i == 1)
	{
		ft_get_first_row(x, j);
	}
	else if (i == y)
	{
		ft_get_last_row(x, y, i, j);
	}
	else if (j > 1 && j < x)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush01(int x, int y)
{
	int	j;
	int	i;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			get_rows(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
