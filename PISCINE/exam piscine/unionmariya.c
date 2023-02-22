/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unionmariya.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 11:56:37 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/02 16:48:04 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int     check_doubles1(char *str, char test_car, int position)
 {
     int j;

     j = 0;
     while (j < position)
     {
         if (str[j] == test_car)
             return (0);
         j++;
     }
     return (1);
 }

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = 0;
	return(s1);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	int i;
	char *str;

	if (argc == 3)
	{
		str = ft_strcat(argv[1], argv[2]);

		i = 0;
		while (str[i] != 0)
		{
			if (check_doubles1(str, str[i], i) == 1)
			{	
				write(1, &str[i], 1);
			}
		i++;
		}	
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return(0);
}
