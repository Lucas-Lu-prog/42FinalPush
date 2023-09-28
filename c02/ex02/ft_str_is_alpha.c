/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:33:10 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/12 09:45:32 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
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
	char	c;
	char	*ptr;

	c = 2;
	ptr = &c;
	printf("%d\n", ft_str_is_alpha(""));
}
 */
/* 
    ((str[i] < 32 || str[i] > 126) && str[i] != '\0') && str[i] != 1
	-> permet de savoir si les characters sont tous affichable;

    65 -> A ; 90 -> Z ; 97 -> a ; 122 -> z;
*/