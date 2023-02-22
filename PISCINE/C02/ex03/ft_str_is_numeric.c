/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:21:33 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 09:56:16 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*tab;
	int	z;

	tab = "14455";
	z = ft_str_is_numeric(tab) + 48;
	write(1, &z, 1);
	write(1, "\n", 1);
	return (0);
}
*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
