/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:44:27 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/11 14:10:29 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
/*
Stockage de a pour pouvoir reutiliser sa valeur apres la division
car une fois : *a = *tmp / *b; realise, la valeur de a change
*/
/* 
int	main(void)
{
	int	*a;
	int	*b;
	int	dividende;
	int	diviseur;

	a = &dividende;
	b = &diviseur;
	dividende = 55;
	diviseur = 2;
	ft_ultimate_div_mod(a, b);
	printf("%d\n", *a);
	printf("%d\n", *b);
}
 */