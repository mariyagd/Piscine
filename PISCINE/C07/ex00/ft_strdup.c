/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:49:30 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/03 18:07:14 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		z;

	z = ft_strlen(src);
	dest = malloc(sizeof(src) * z);
	ft_strcpy(dest, src);
	return (ft_strcpy(dest, src));
}

/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char *c;
   	c = "mariya";
	printf("%s\n",strdup(c));
	printf("%s\n", ft_strdup(c));
}*/
