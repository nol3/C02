/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:28:30 by acardena          #+#    #+#             */
/*   Updated: 2022/02/28 11:13:23 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		x;
	int		new_word;
	char	c;

	new_word = 1;
	x = 0;
	while (str[x])
	{
		c = str[x];
		if (new_word == 1 && c >= 'a' && c <= 'z')
			str[x] -= 32;
		else if (new_word == 0 && c >= 'A' && c <= 'Z')
			str[x] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			new_word = 1;
		else
			new_word = 0;
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	resultado[250] = "salut, commen 42mots quarante-deux; cinquante+et+un";
	printf("%s \n", ft_strcapitalize(resultado));
}*/
