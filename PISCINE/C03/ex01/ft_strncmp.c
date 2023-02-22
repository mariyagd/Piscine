/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:21:29 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/28 12:58:35 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{

char str1[] = "ggg";
char str2[] = "ggggggggggggga";


// fonction originale
printf("fonction strncmp: %d\n",strncmp(str1, str2, 8));


// ma fonction
printf("ma fonction strncmp: %d\n", ft_strncmp(str1, str2, 8));
return (0);
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
