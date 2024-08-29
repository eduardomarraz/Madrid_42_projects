/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:00:30 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/14 12:59:31 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	resto;

	resto = a % b;
	division = a / b;
	*div = division;
	*mod = resto;
}
/*
int main(void) {
    int a;
    int b;
    int *div;
    int *mod;
    
    a = 10;
    b = 2;
    
    div = &a; 
    mod = &b;

    ft_div_mod(a, b, div, mod);

    printf("%d\n",*div);  
    printf("%d\n", *mod);  
    return 0;
}
*/
