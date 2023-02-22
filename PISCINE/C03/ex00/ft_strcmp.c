/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:38:44 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/28 12:46:02 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
char str1[] = "f";
char str2[] = "";
int  result;

// fonction originale
result = strcmp(str1, str2);
printf("fonction originale: %d\n",result);

//ma fonction
ft_strcmp(str1, str2);
printf("ma fonction       : %d\n", ft_strcmp(str1, str2));
return (0);
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
