/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:53:12 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/13 14:19:48 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_lowcase(char *str)
{
	int		i;

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

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowcase(str);
	if (i == 0 && str[i] >= 97 && str[i] <= 122)
	{
		str[i] -= 32;
	}
	i++;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			if (!(str[i - 1] >= 97 && str[i - 1] <= 122) \
				&& !(str[i - 1] >= 65 && str[i - 1] <= 90) \
					&& !(str[i - 1] >= 48 && str[i - 1] <= 57))
					str[i] -= 32;
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	*ptr;

	char tab[] = "c4Ello, sPa45ce bAR JA()Mll";
	ptr = tab;
	printf("%s\n", ft_strcapitalize(ptr));
}
 */