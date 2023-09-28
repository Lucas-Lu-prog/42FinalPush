/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:25:28 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/22 08:26:27 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb < 2)
		return (0);
	while (i <= nb / 2 && i <= 46341)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb == 2147483647)
		return (nb);
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb + i) == 0)
		i++;
	return (nb + i);
}
/*
int	main(void)
{
	printf("%d\n", ft_find_next_prime(573));
	return (0);
}
 */