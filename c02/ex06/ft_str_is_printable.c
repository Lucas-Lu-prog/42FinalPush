/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:10:17 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/13 14:17:45 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] > 126) && str[i] != 1)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* 
int	main(void)
{
	printf("%d\n", ft_str_is_printable("\0wqoeqiweoh"));
}
 */