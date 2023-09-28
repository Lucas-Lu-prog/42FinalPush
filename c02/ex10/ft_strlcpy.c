/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 08:33:18 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/13 14:50:30 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_length;
	int	i;

	i = 0;
	src_length = ft_length(src);
	if (src_length <= 0)
		return (src_length);
	while (src[i] && size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
/* 
int	main(void)
{
	char src1a[] = "abcde";
	char dest1a[] = "1234567";
	
	printf("%d\n", ft_strlcpy(dest1a, src1a, 15));
} 
*/