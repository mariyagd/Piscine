/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:24:47 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/19 19:06:59 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	ft_putstr(char *str);

int	 main(void)
{
	char	str[] = "mariya";
	ft_putstr(str);
	return (0);
}
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		str++;
	}
}
