/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:27:15 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/09 16:37:00 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
utilisation d'un tmp pour ne par perdre la valeur pointe par a lors de l'echange
*/
/* 
int main(void)
{
    int *a;
    int *b;
    int c;
    int d;

    a = &c;
    b = &d;
    c = 10;
    d = 20;

    printf("%d\n", c);
    printf("%d\n", d);
    ft_swap(a, b);
    printf("%d\n", c);
    printf("%d\n", d);
}
 */