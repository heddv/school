/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 16:31:31 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/27 11:22:39 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (!(power > 1))
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main()
{
	printf("%d\n", ft_recursive_power(5,3));
	printf("%d\n", ft_recursive_power(5,-3));
	printf("%d\n", ft_recursive_power(5,0));
	return (0);
}*/
