/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:52:35 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/16 13:04:46 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/* 
int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr(argv[1]);
	else
		printf("Trop ou pas assez d'arguments");
	return (0);
}
 */