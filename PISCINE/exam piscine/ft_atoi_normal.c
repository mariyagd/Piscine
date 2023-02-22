/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:55:17 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/04 14:29:58 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


int	ft_atoi(char *c)
{
	int sign;
	int i;
	int resultat;

	resultat = 0;
	i = 0;
	sign = 1;
	if (c[i] == 45)
	{
		sign *= (-1);
		i = i + 1;
	}
	else if (c[i] == 43)
	{
		i = i+ 1;
	}
	if (c[i] < '0' && c[i] >'9')
	{
		return (0);
	}
	while (c[i] != 0 && c[i] >= '0' && c[i]<= '9')
		{
			resultat = resultat * 10;
			resultat = resultat + (c[i] - 48);
			i++;
		}
		return (resultat * sign);
}


#include <stdio.h>

int	main(int argc, char *argv[])
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}


