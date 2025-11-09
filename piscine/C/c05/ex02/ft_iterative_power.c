/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 10:41:19 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/27 11:20:07 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int main()
{
	printf("%d\n", ft_iterative_power(5,3));
	printf("%d\n", ft_iterative_power(3,5));
	printf("%d\n", ft_iterative_power(2,-5));
	return (0);
}*/
