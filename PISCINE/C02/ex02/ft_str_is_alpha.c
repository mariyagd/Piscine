/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:57:19 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/26 09:32:47 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*tab;

	tab = "*";
	ft_str_is_alpha(tab);
	printf("%d\n", ft_str_is_alpha(tab));
	return (0);
}
*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') \
				|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		else
			return (0);
	}	
	return (1);
}
