/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:54:55 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/12 15:46:23 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	*ptr;

	char tab[] = "asdqowieqjwpeubcowygeqiyrgqwoety88192831";
	ptr = tab;
	printf("%s\n", ft_strupcase(ptr));
}
 */