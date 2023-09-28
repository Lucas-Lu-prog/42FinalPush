/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:45:43 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/16 12:50:53 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/* 
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", ft_strlen(argv[1]));
	else
		printf("Trop ou pas assez d'argument\n");
	return (0);
}
 */