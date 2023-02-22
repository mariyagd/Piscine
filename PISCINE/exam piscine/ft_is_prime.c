/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboulemt <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:00:03 by nboulemt          #+#    #+#             */
/*   Updated: 2022/08/03 15:58:37 by nboulemt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (0);
	else
		return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("resultat: %d\n", ft_is_prime(41));
}
