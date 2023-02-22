/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2iemeessai.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:27:39 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/18 11:13:56 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	
	a = '0';

	
	while (a <= '7')
	{
		b = a + 1;

	while (b <= '8')
	{ 
		c = b + 1;
	while (c <= '9')
	{
		write (1, &a, 1);
		write (1, &b, 1);
		write (1, &c, 1);
		write (1, ", ", 2);
		c++;
	}
	b++;
	}
	a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}


