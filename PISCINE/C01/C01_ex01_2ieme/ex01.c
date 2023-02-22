/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:39:51 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/22 12:55:45 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int a;
	char b;
	char c;
	int *nbr1;
	int **nbr2;
	int ***nbr3;
	int ****nbr4;
	int *****nbr5;
	int ******nbr6;
	int *******nbr7;
	int ********nbr8;
	int *********nbr;

	nbr1 = &a;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;


	ft_ft(nbr);
	b = (a / 10) + 48;
	c = (a % 10) + 48;

	write(1, &b, 1);
	write(1, &c, 1);
	write(1, "\n", 1);

	return (0);
}
