/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:24:54 by acardena          #+#    #+#             */
/*   Updated: 2022/02/21 18:01:24 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a') && (str[x] <= 'z'))
		{
			str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	resultado[10] = "alejandro";
	printf("%s \n",  ft_strupcase(resultado));
	printf("%s \n",  resultado);
}*/
