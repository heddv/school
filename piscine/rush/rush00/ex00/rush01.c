/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 18:49:34 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/10 19:00:22 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_ligne(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1 && i != 0 && j != 0))
	{
		ft_putchar('/');
	}
	else if ((i == x - 1 && j == 0) || (i == 0 && j == y - 1))
	{
		ft_putchar('\\');
	}
	else if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	while (j < y)
	{	
		i = 0;
		while (i < x)
		{
			print_ligne(i, j, x, y);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}
