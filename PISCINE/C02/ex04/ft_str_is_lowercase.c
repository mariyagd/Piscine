/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:25:04 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 09:58:25 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*tab;
	int z;

	tab = "uuu";
	z =	ft_str_is_lowercase(tab) + 48;
	write(1, &z, 1);
	write(1, "\n", 1);
	return (0);
}
*/

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
