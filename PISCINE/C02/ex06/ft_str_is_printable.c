/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:49:39 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 09:58:51 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*tab;
	int z;

	tab = "\n";
	z = ft_str_is_printable(tab) + 48;
	write(1, &z, 1);
	write(1, "\n", 1);
	return (0);
}
*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
