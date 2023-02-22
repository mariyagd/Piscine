/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:34:08 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 09:46:13 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int ft_strlen(char *src)
{
	int i;

	i = 0;
	while(src[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	source[100] = "mariya";
	char	destination[ft_strlen(source)];	

	printf("src avant copie: %s\n", source);
	printf("dest avant copie: %s\n", destination);
	ft_strcpy(destination, source);
	printf("MA fonction strcpy, src apres copie: %s\n", source);
	printf("MA fonction strcpy, dest apres copie: %s\n", destination);


	char	source2[100] = "mariya";
	char	destination2[ft_strlen(source2)];	


	strcpy(destination2, source2);
	printf("fonction originale, src apres copie: %s\n", source2);
	printf("fonction originale, dest apres copie: %s\n", destination2);
	return (0);

}
*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
