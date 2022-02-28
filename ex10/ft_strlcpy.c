/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:24:30 by acardena          #+#    #+#             */
/*   Updated: 2022/02/28 12:27:57 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	res;

	x = 0;
	res = 0;
	while (src[res] != '\0')
		res++;
	if (size < 1)
		return (res);
	while (src[x] != '\0' && x < size - 1)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	y[250] = "hola";
	char	x[250] = "mundo";

	printf("%lu \n", strlcpy(x,y, 10));
	printf("%u \n", ft_strlcpy(x,y, 10));
}*/
