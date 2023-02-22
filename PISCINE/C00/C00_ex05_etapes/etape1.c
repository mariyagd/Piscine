/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2iemeessai.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:27:39 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/18 10:33:40 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	
	a = '0';
	b = '1';
	c = '2';

	while (c <= 57)
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		a++;
		b++;
		c++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}


