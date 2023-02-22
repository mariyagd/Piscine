/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:09:09 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/31 13:40:16 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(int argc, char *argv[0])
{
	int z;
	int i;

	i = 0;
	while (++i < argc)
	{
		z = atoi(argv[i]);
	   	printf("le factorielle de %d est : %d\n", z,  ft_recursive_factorial(z));
	}
	return (0);
}
*/

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else if (nb > 0)
	{
		res = res * nb;
		res = res * ft_recursive_factorial(nb - 1);
	}
	return (res);
}
