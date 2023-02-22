/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:37:31 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/28 13:06:20 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

char	 *ft_strcat(char *dest, char *src);

int main(void)
{
//fonction originale 
char dest[100] = "deepthough";
char src[] = "awmub4nvj6da6f4pb6cy22o0";

strcat(dest, src);
printf("fonction originale: %s\n", dest);

//ma fonction
char dest1[100] = "deepthouth";
char src1[] = "awmub4nvj6da6f4pb6cy22o0";

ft_strcat(dest1, src1);
printf("ma fonction: %s\n", dest);

return (0);
}
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{	
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
