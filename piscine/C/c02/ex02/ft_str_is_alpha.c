/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:54:41 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/13 19:58:50 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 97 && str[i] <= 122)
				|| (str[i] >= 65 && str[i] <= 90)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	printf("%d", ft_str_is_alpha("yuzu"));
	return (0);
}*/
