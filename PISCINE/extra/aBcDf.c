/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:39:51 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/22 09:37:53 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char p;
	char i;

	i = 'a';
	p = 'B';
	while ( p <= 'Z')
	{
		write(1, &i, 1);
		write(1, &p, 1);
		p = p +  2 ;
		i = i + 2;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
