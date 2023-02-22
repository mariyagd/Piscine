/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:08:22 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/03 18:49:59 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min < max)
	{
		dest = malloc(sizeof(int) * (max - min));
		while (min + i < max)
		{
			dest[i] = min + i;
			i++;
		}
		if (!dest)
			return (0);
		else
			return (dest);
	}
	else
		return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*dest;
	int i;

	i = 0;
	dest = ft_range(2, 6);
	while (dest[i])
	{
		printf("%d\n", dest[i]);
		i++;
	}
}*/
