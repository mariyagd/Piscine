/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:57:47 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/31 19:44:11 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*swp;

	swp = *s1;
	*s1 = *s2;
	*s2 = swp;
}

void	ft_impression(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	z;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			z = ft_strcmp(argv[i], argv[j]);
			if (z > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			else
				j++;
		}
		i++;
	}
	ft_impression(argc, argv);
	return (0);
}
