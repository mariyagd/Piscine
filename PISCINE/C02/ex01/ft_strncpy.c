/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:28:31 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 21:22:35 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	source[] = "totomomo";
	char	destination[] = "1234567890";
//avant copie	
	printf("src avant copie: %s\n", source);
	printf("dest avant copie: %s\n", destination);

// apres copie fonction originale
	 strncpy(destination, source, 4);

	printf("FT ORIGINALE dest apres copie: %s\n", destination);
	printf("FT ORIGINALE element [0]: %c\n", destination[0]);
	printf("FT ORIGINALE element [1]: %c\n", destination[1]);
	printf("FT ORIGINALE element [2]: %c\n", destination[2]);
	printf("FT ORIGINALE element [3]: %c\n", destination[3]);
	printf("FT ORIGINALE element [4]: %c\n", destination[4]);
	printf("FT ORIGINALE element [5]: %c\n", destination[5]);
	printf("FT ORIGINALE element [6]: %c\n", destination[6]);
	printf("FT ORIGINALE element [7]: %c\n", destination[7]);
	printf("FT ORIGINALE element [8]: %c\n", destination[8]);
	printf("FT ORIGINALE element [9]: %c\n", destination[9]);
	printf("FT ORIGINALE element [10]: %c\n", destination[10]);

	char	source2[] = "totomomo";
	char	destination2[] = "1234567890";
// apres copie ma fonction
	ft_strncpy(destination2, source2, 4) ;
	printf("MA FONCTION dest apres copie: %s\n", destination2);
	printf("MA FONCTION element [0]: %c\n", destination2[0]);
	printf("MA FONCTION element [1]: %c\n", destination2[1]);
	printf("MA FONCTION element [2]: %c\n", destination2[2]);
	printf("MA FONCTION element [3]: %c\n", destination2[3]);
	printf("MA FONCTION element [4]: %c\n", destination2[4]);
	printf("MA FONCTION element [5]: %c\n", destination2[5]);
	printf("MA FONCTION element [6]: %c\n", destination2[6]);
	printf("MA FONCTION element [7]: %c\n", destination2[7]);
	printf("MA FONCTION element [8]: %c\n", destination2[8]);
	printf("MA FONCTION element [9]: %c\n", destination2[9]);
	printf("MA FONCTION element [10]: %c\n", destination2[10]);
	return (0);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
