/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:16:40 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/11 19:23:08 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int 	main()
{
	int a;
	int b;

	a = 5;
	b = 7;

	printf("%d\n", a);	
	printf("%d\n", b);
	ft_swap(&a,&b);
	printf("%d\n", a);	
	printf("%d\n", b);
}*/
