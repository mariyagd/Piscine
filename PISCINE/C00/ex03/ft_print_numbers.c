/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:23:40 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/14 11:45:30 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write (1, &c, 1);
		c++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
