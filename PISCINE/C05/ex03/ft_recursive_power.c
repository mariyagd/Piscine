/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:28:02 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/31 13:46:27 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power);

int	main(int argc, char *argv[])
{
	(void)argc;

	if (argc == 3)
	{
		int z;
		int y;

		z = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", ft_recursive_power(z, y));
	}
	return(0);

}
*/

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (nb == 0 || power < 0)
	{
		return (0);
	}
	else if (power > 0)
	{
		res = res * nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}
