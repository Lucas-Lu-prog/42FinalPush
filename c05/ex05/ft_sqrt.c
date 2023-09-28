/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:05:49 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/22 08:25:08 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	while ((i * i) < nb)
		i++;
	if ((i * i) > nb || (i * i) < nb)
		return (0);
	return (i);
}
/* 
int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	return (0);
}
 */