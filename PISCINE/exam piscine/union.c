/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:59:43 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/02 19:56:07 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_check(char *str, char test_car, int position)
{
	int i;
	
	i = 0;
	while (i < position)
	{
		if (str[i] == test_car)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char *str;
	int i;

	i = 0;
	if (argc == 3)
	{
		str = ft_strcat(argv[1], argv[2]);
		while (str[i] != 0)
		{
			if (ft_check(str, str[i], i) == 1)
			{
				write(1, &str[i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}



