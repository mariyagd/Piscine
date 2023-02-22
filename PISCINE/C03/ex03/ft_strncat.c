/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:52:48 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/28 13:09:38 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

char	 *ft_strncat(char *dest, char *src, unsigned int n);

int main(void)
{

char dest[10] = "123";
char src[4] = "abc";

//fonction originale
strncat(dest, src, 1);
printf("fonction strcat: %s\n", dest);

//ma fonction
char dest1[10] = "123";
char src1[4] = "abc";

ft_strncat(dest1, src1, 1);
printf("ma fonction strcat: %s\n", dest1);

return (0);
*/

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
