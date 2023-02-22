/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:28:59 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/28 18:06:53 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_atoi(argv[1]);
		printf("%d\n",ft_atoi(argv[1]));
	}

	return (0);
}
*/

int	ft_atoi(char *str)
{
	int	i;
	int	y;
	int	resultat;

	i = 0;
	resultat = 0;
	y = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			y *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{		
		resultat = resultat * 10;
		resultat = resultat + (str[i] - 48);
		i++;
	}
	return (resultat * y);
}
