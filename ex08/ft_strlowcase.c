/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:02:35 by acardena          #+#    #+#             */
/*   Updated: 2022/02/21 18:26:21 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A') && (str[x] <= 'Z'))
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	resultado[50] = "ALEJANDRO";
	printf("%s \n", ft_strlowcase(resultado));
}*/
