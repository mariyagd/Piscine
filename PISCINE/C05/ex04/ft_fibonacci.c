/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:57:45 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/31 13:50:10 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int z;
	(void)argc;

	z = atoi(argv[1]);
	printf("%d\n", ft_fibonacci (z));
	return (0);
}*/
