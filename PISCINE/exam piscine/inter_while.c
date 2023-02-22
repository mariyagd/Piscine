/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  inter_while.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:55:17 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/04 16:07:10 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(char *str, char test_car, int position)
{
	int i;

	i = 0;
	while (i < position)
	{
		if (str[i] == test_car)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <unistd.h>
int	main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;

	while (argv[1][i] != 0)
	{
		j = 0;
		while (argv[2][j] != 0)
		{
			if (argv[1][i] == argv[2][j])
			{
				if (ft_check(argv[1], argv[1][i], i) == 1)
				{
					write(1, &argv[1][i], 1);
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}

		   			   

