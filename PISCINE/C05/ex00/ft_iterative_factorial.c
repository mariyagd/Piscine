/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:33:13 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/31 13:29:33 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char *argv[])
{
	int	z;
	int	i;

	i = 0;
	while (++i < argc)
	{
		z = atoi(argv[i]);
		printf("le factoriel de %d est: %d\n", z, ft_iterative_factorial(z));
	}
	return (0);
}
*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	tmp;
	int	res;

	i = 0;
	res = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb > 0)
	{
		while (i < nb)
		{	
			tmp = nb - i;
			res = res * tmp;
			i++;
		}
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}
