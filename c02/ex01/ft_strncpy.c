/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:09:10 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/13 14:16:52 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	int	i;

	char dest[] = "Epic fail !!!!!";
	char src[] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 15), dest);
	i = 9;
	while (i < 15)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL! Remainder of dst must be filled with `\\0' characters,
				got %c (\\%x) at pos %d\n", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}
*/