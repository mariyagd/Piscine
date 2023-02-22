/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:12:48 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/20 11:33:32 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	z;

	z = ft_strlen("mariya");
	printf("%d\n", z);
	return (0);
}
*/
// affiche i nombre de fois qu' a incremene *str
// alors qu'avant i etait le cle indice du tableau str 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}
