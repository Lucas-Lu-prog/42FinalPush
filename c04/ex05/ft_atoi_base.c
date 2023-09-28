/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 09:26:01 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/17 13:12:48 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	control_validity(char *str, int i)
{
	while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' \
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	handle_base_error(char *str, int taille_base)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	if (taille_base <= 1)
		return (1);
	while (str[i])
	{
		tmp = str[i];
		j = 1;
		while (str[i + j])
		{
			if (str[i + j] == tmp)
				return (1);
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

int	get_base_length(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;
	int	base_length;

	i = 0;
	sign = 1;
	nb = 0;
	base_length = get_base_length(base);
	i = control_validity(str, i);
	if (handle_base_error(base, base_length) == 1)
		return (0);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		printf("%d\n", nb);
		nb = nb * base_length + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}

int	main(void)
{
	char	hexbase[] = "0123456789abcdef";

	printf("%d\n", ft_atoi_base("    ---+--+1234ab567", hexbase));
	return (0);
}
