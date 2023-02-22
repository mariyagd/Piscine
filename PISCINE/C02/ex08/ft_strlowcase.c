/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:23:23 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 10:05:48 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	int i;
	char	tab[] = "MAR@11 ,  1iYya.";

	printf("avant: %s\n", tab);
	ft_strlowcase(tab);
	printf("apres: %s\n", tab);
	
	i = 0;
	while (tab[i] != '\0')
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
