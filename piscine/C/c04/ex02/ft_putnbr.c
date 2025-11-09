/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 20:04:43 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/23 11:35:53 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	res;

	res = 0;
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}	
	res = '0' + (nb % 10);
	write(1, &res, 1);
}
/*
int main(void)
{
	ft_putnbr(42);
	ft_putnbr(-2147483648);
	return (0);
}*/
