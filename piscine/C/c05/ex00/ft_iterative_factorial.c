/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 17:43:32 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/25 18:09:53 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
int main()
{
	printf("%d", ft_iterative_factorial(5));
	printf("%d", ft_iterative_factorial(0));
	return (0);
}*/
