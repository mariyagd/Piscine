/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:04:52 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/01 17:53:04 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb == 1)
	{
		return (1);
	}
	if (nb > 0)
	{
		while ((x * x < nb) && x <= 46340)
		{
			x++;
		}
		if (x * x == nb)
		{		
			return (x);
		}	
	}		
	return (0);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	z;
	int	i;
	
	i = 0;
	while (++i < argc)
	{
		z = atoi(argv[i]);
		printf("la racine carre de %d est:  %d\n", z, ft_sqrt(z));
	}	
	return (0);
}
*/
