/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 08:58:22 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/17 09:50:35 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c, unsigned int size)
{
	write(1, &c, size);
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	taille_base;

	taille_base = 0;
	while (base[taille_base])
		taille_base++;
	if (handle_base_error(base, taille_base) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-', 1);
		nbr *= -1;
	}
	while (nbr != 0)
	{
		ft_putchar(base[(unsigned int)nbr % taille_base], 1);
		nbr = (unsigned int)nbr / taille_base;
	}
}
/* 
int	main(void)
{
	//char	dexbase[] = "0123456789";
	char	hexbase[] = "0123456789abcdef";
	//char	octbase[] = "poneyvif";
	int		nombre = -256;

	ft_putnbr_base(nombre, hexbase);
	return (0);
}
 */