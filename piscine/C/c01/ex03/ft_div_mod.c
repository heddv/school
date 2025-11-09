/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:22:35 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/11 19:01:28 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{	
	int a;
	int b;
	int *div1;
	int *mod1;
	
	a = 10;
	b = 2;

	div1 = &a;
	mod1 = &b;

	ft_div_mod(a, b, div1, mod1);	
	printf("%d\n", *div1);
	printf("%d\n", *mod1);	
	return (0);
}*/
