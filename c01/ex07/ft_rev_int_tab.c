/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 10:26:14 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/11 14:03:48 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i != size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/* 
int	main(void)
{
	int	size;
	int	tab[size];
	int	*p;
    int j;

	size = 4;
	for(int i = 0; i <= size; i++)
		p[i] = i + 1;
	ft_rev_int_tab(p, size);
	while (j < size)
	{
		printf("%d\n", p[j]);
		j++;
	}
}
 */