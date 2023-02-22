/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:25:02 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/25 11:58:01 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*// j est le caractere que test pour transformer
// i est le caracterer qui precede j 
//si j est une lettre miniscule
//et si le caractere precedent j n'est pas un chiffre 
//et n'est pas une lettre minuscule 
//et n'est pas une lettre majuscule
//alors transforme j en majuscule
#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char tab[100] = "salut, .comment tu vas ?mots 8quarante-deux; cinquante+et+un";

	int i;
	
	printf("%s\n", tab);
//	printf("apres: %s\n", ft_strcapitalize(tab));

	i = 0;
	ft_strcapitalize(tab);	
	while (tab[i] != '\0')
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, "\n", 1);
	
	return (0);
}
*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] = str[0] - 32;
	i = 0;
	j = i + 1;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
			if ((str[i] < '0' || str[i] > '9') && \
					(str[i] < 'a' || str[i] > 'z') \
					&& (str[i] < 'A' || str[i] > 'Z'))
				str[j] = str[j] - 32;
		j++;
		i++;
	}	
	return (str);
}
