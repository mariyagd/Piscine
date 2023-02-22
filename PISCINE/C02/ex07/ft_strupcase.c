/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:48:05 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 10:02:58 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	int	j;
	char	tab[] = "idH8HaaIa";

	printf("avant: %s\n", tab);
	printf("apres: %s\n", ft_strupcase(tab));
	

	j = 0;
	while (tab[j] != '\0')
	{
		write(1, &tab[j], 1);
		j++;
	}
	return (0);
}
*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
