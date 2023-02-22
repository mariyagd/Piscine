/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  swap_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanchev <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:55:17 by mdanchev          #+#    #+#             */
/*   Updated: 2022/08/04 14:44:32 by mdanchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char a;
	unsigned char b;

	a = octet >> 4;
	b = octet << 4;
	return (a | b);
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	unsigned char octet;
	octet = '4';
	printf("%c\n",swap_bits(octet));
	return (0);
}
