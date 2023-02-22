/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:13:54 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/31 17:56:33 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{	
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
