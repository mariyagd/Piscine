/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 08:39:51 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/22 12:00:15 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int a;
	int b;
	char c;
	char d;	
	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
			{
				c = (a/10) + 48;
				d = (a%10) + 48;
				write(1, &c, 1);
				write(1, &d, 1);
				c = (b/10) + 48;
				d = (b%10) + 48;
				write(1, " ", 1);
				write(1, &c, 1);
				write(1, &d, 1);
				if(!((a == 98) & (b==99)))
			
					write(1, ", ",1);
				b++;
			}
		a++;		
	}						

}	


int	main(void)
{
	ft_print_comb2();
	return (0);
}



				

