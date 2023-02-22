/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:59:43 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/03 14:03:18 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int ft_check_1(char *str, char test_car, int position)
{
    int i;

    i = 0;
    while (i < position )
    {
        if (str[i] == test_car)
        {
            return (0);
        }
        i++;
    }
    return (1);
}

void ft_check2(char *str1, int i, char *str2, int j)
{
	int max1 = ft_strlen(str1);
	int max2 = ft_strlen(str2);

	if ( i < max1)
	{
		if(j < max2)
		{
			if (str1[i] == str2[j])
			{
				if(ft_check_1(str1, str1[i], i) == 1)
				{
					write(1, &str1[i], 1);
				}
				ft_check2(str1, i + 1, str2, j);
			}
			else
			{
				ft_check2(str1, i, str2, j + 1);
			}
		}	
		else 
			ft_check2(str1, i + 1, str2, j = 0);
	}
}




int	main(int argc, char *argv[])
{
	(void)argc;

	ft_check2(argv[1], 0, argv[2], 0);
	return(0);
}
