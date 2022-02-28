/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:54:51 by acardena          #+#    #+#             */
/*   Updated: 2022/02/24 10:49:46 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < '0') || (str[x] > '9'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char	resultado;
	resultado = ft_str_is_numeric("16847");
	printf("%d\n", resultado);
}*/
