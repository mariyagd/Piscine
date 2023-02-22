/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:46:30 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/19 18:26:04 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	i;
	int	j;

	i = 2;
	j = 6;
	ft_ultimate_div_mod(&i, &j);
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);

}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = (*a / *b);
	d = (*a % *b);
	*a = c;
	*b = d;
}
