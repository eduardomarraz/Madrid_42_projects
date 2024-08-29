/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:31:43 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/21 17:52:22 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	uppercase;
	int	lowercase;

	i = 0;
	uppercase = 0;
	lowercase = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		lowercase = (str[i] >= 'a' && str[i] <= 'z');
		if (!(uppercase || lowercase))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int    main(void)
{
    char str[] = "aBJHaZ";

    int result = ft_str_is_alpha(str);
    printf("Si contiene caracteres alfabéticos: %d\n", result);
    return 0;
}*/
