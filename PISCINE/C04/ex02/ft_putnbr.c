/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:05:55 by mdanchev          #+#    #+#             */
/*   Updated: 2022/07/31 14:46:37 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
// signed int va de -2'147'483'648 to 2'147'483'647
// unsigned int va de 0 to 4'294'967'295

#include <stdlib.h>

void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	ft_putnbr(-12356);
	return (0);	
}		
*/	

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
