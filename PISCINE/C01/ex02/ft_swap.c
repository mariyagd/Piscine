/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:09:18 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/19 18:09:31 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	i;
	int	j;

	i = -5;
	j = 4;
	ft_swap(&i, &j);
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
}
*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
