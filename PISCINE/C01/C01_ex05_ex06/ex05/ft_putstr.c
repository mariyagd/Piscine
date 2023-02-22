/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:24:47 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/20 11:28:15 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	 main(void)
{
	char	str[] = "mariya";
	ft_putstr(str);
	return (0);
}


#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
