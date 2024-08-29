/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:00:11 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/14 17:54:44 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	e;
	int	f;

	e = *a / *b;
	f = *a % *b;
	*a = e;
	*b = f;
}
/*
int main()
{
        int a;
        int b;
        int *c;
        int *d;

        a = 10;
        b = 2;

        c = &a;
        d = &b;
        ft_ultimate_div_mod(c, d);

    printf("%d\n", a);
    printf("%d\n", b);
}
*/
