/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 16:14:30 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/28 16:38:29 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min) + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

int main()
{
	int	i;
	int	*tab;
	int	min = -2;
	int	max = 8;
	
	tab = ft_range(min, max);

	i = 0;
	while (min < max)
	{
		printf("%d", tab[i]);
		min++;
		i++;
	}
	return (0);
}
