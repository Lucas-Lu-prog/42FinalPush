/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:41:17 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/12 15:45:40 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char tab[] = "IQUWHEIBSIQGYWGEUIYQBDBOIWHEIUQWEOAPOQWPEI1823012";
	char *ptr;

	ptr = tab;
	printf("%s\n", ft_strlowcase(ptr));
}
 */