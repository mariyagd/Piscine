/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:00:57 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/19 18:04:34 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)

{
	int	a;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr;

	nbr8 = &a;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	ft_ultimate_ft(nbr);
	printf("%d\n",*********nbr);
	return (0);
}
*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
