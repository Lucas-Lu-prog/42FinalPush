/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:59:13 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/22 08:25:33 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 3;
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb < 2)
		return (0);
	while (i <= nb / 2 && i <= 46341)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/* 
int	main(void)
{
	if (ft_is_prime(2147483647))
	{
		printf("est un nombre premier.");
	}
	else
	{
		printf("n'est pas un nombre premier.");
	}
}
 */