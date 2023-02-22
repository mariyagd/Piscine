/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:39:51 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/22 09:46:59 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char p;
	char i;

	p = 'Y';
	i = 'z';

	while (i >= 'b')
	{
		write(1, &i, 1);
		write(1, &p, 1);
		i = i -  2;
		p = p - 2;
	}
    write(1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
