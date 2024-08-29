/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <eduamart@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:28:54 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/13 16:46:44 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numeros(int i, int j)
{
	ft_putchar('0' + i / 10);
	ft_putchar('0' + i % 10);
	ft_putchar(' ');
	ft_putchar('0' + j / 10);
	ft_putchar('0' + j % 10);
	if (i != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (a <= 98 && b <= 99)
		{
			print_numeros(a, b);
			b++;
		}
		a++;
	}
}
