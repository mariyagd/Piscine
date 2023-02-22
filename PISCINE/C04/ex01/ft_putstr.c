/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 10:46:28 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/28 17:38:35 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)	
		{
			ft_putstr(argv[i]);
			write(1, "\n ", 1);
		}
	}
	else 
		write(1, "\n", 1);
	return (0);
}
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}
