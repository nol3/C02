/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:06:38 by acardena          #+#    #+#             */
/*   Updated: 2022/02/21 17:13:11 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A') || (str[x] > 'Z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	resultado;
	resultado = ft_str_is_uppercase("ALEJandro");
	printf("%d\n", resultado);
}*/
