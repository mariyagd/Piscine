/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:41:20 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/28 17:36:15 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(int argc, char *argv[])
{
	int 	i;
	int		sz;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			sz = ft_strlen(argv[i]);
			printf("%s : %d\n", argv[i], sz);
			++i;
		}
	}
	else
	{
		write(1,"\n", 1);
	}
	return (0);
}
*/	

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
