/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:43:49 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/19 11:44:47 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
}

void	ft_impression(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a < '7')
	{
		write (1, ", ", 2);
	}
}

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
				ft_impression(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
