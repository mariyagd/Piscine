/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:02:21 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/21 21:58:22 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tableau[] = {1, 2, 3, 4, 5, 6};
	int	size;
	int	i;

	size = 6;
	ft_rev_int_tab(tableau, size);
	i = 0;
	while (i < size)
	{
		printf("%d\n", tableau[i]);
		i++;
	}
	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size = size - 1;
	while (i <= (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}
