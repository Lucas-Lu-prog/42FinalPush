/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzurie <lluzurie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:44:27 by lluzurie          #+#    #+#             */
/*   Updated: 2023/09/09 16:55:50 by lluzurie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(void)
{
    int *div;
    int *mod;
    int a;
    int b;
    int division;
    int modulos;

    div = &division;
    mod = &modulos;
    a = 20;
    b = 2;
    ft_div_mod(a, b, div, mod);

    printf("%d\n", division);
    printf("%d\n", modulos);
} */
