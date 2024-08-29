/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:44:18 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/14 11:56:27 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	h;

	h = *a;
	*a = *b;
	*b = h;
}
/*
int main(void) {
    int a;
    int b;
    int *c;
    int *d;
    
    a = 1;
    b = 2;
    
    c = &a;
    d = &b;

    ft_swap(c, d);

    printf("%d\n", a);  // Debería imprimir 1
    printf("%d\n", b);  // Debería imprimir 2
    return 0;
}
*/
