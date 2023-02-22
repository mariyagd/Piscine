/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:39:51 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/22 13:13:12 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int c;
	int d;
	char i;
	char j;

	c = 1;
	d = 2;

	ft_swap(&c, &d);
	j = (c % 10) + 48;
	write(1, &j, 1);

	j = (d % 10) + 48;
	write(1, &j, 1);


	return (0);
}
