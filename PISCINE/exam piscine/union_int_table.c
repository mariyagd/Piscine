/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_int_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:18:54 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/02 20:00:42 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_checked(char *str)
{
	int	i;
	int a;
	int	tab[127];

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if(tab[a] != 1)
		{

			tab[a] = 1;
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		ft_checked(argv[1]); 
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}


