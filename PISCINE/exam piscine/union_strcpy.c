/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_strcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:43:10 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/02 16:35:29 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char    *ft_strcat(char *dest, char *src)
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

int ft_check(char *str, char test_car, int position)
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

int main(int argc, char *argv[])
{
    char *str;
	char dest[ft_strlen(argv[1])];
	char src[ft_strlen(argv[2])];;
    int i;

    i = 0;
    if (argc == 3)
    {
		ft_strcpy(dest, argv[1]);
		ft_strcpy(src, argv[2]);
        str = ft_strcat(dest, src);
	
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

