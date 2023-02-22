/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:39:51 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/22 10:37:10 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{

	write(1,"Hello world!\n", 13);
	}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
