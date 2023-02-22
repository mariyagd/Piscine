/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:50:01 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/01 19:23:20 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int size;
	int debut;
	int fin;

	if (argc == 2)
	{
		size = ft_strlen(argv[1]);
		size = size - 1;
		while (argv[1][size] == 32 || argv[1][size] == 9)
		{
			size--;
		}
		fin = size;
		while (argv[1][size] >= 33 && argv[1][size] <= 123)
		{	
				size--;
		}
		debut = size + 1;
		while (fin >= debut)
		{
			write(1, &argv[1][debut], 1);
			debut++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);	
	return (0);
}
		

