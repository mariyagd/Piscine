/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:42:07 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/19 18:15:41 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	mac;
	int	book;
	int	i;
	int	j;

	i = 2;
	j = 5;
	ft_div_mod(j, i, &mac, &book);
	printf("%d\n", mac);
	printf("%d\n", book);
	return (0);
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
