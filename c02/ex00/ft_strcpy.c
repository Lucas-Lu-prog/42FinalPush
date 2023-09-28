/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:20:48 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/13 14:08:09 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	int		size = 5;
	char	str1[] = "./u3s3ruhc19zeteuf7jn9trht";
	char	str2[size];

	ft_strcpy(str2, str1);
	write(1, &str2, size);
		// va afficher des characters bizarre ( se referer au tableau ascii )
	return (0);
}
 */