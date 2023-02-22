/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:39:51 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/22 10:42:42 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{

	char *c;
	c = "Hello world!";
	write(1, c, 12);
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
