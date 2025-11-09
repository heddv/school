/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:24:45 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/11 19:22:48 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main()
{
	int a1;
	int b1;
	int *c;
	int *d;

	a1 = 10;
	b1 = 2;

	c = &a1;
	d = &b1;

	ft_ultimate_div_mod(c,d);
	printf("%d\n", *c);
	printf("%d\n", *d);
	return (0);
}*/
