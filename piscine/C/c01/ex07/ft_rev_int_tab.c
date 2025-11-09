/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:56:32 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/11 19:20:29 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	min;
	int	max;

	i = 0;
	min = tab[0];
	max = tab[i - 1];
	while (i < size)
	{
		tab[i] = max;
	}
	min = tab[i];
	tab[i] = min;
	i++;
}
/*
int main()
{
	int *tab = [];
	ft_rev_int_tab();
	return (0);
}*/
