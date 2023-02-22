/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  wdmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:55:17 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/04 16:12:01 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

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

#include <stdio.h>
int	main(int argc, char *argv[])
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;

	while (argv[1][i] != 0)
	{
		while (argv[2][j] != 0)
		{
			if (argv[1][i] == argv[2][j])
			{
				{
					count++;
					break;
				}
			}
			j++;
		}
		i++;
	}
	if (count == ft_strlen(argv[1]))
			printf("%s\n", argv[1]);
	return (0);
}

		   			   

