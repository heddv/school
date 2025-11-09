/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kislamov <kislamov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:23:30 by kislamov          #+#    #+#             */
/*   Updated: 2025/08/14 11:56:04 by kislamov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ()
		{
		
		}
		
		i++;
	}
	return (str);
}

int main()
{

	char phrase[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(phrase));
	printf("%c", phrase[6]);
	return (0);
}
