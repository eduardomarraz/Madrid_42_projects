/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:36:52 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/28 14:56:02 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_entero(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (str[0] == '-')
		i = 1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (str[0] == '-')
		result = -result;
	return (result);
}

int	ft_atoi(char *str)
{
	int	negativo;
	int	i;
	int	j;
	int	cont;

	negativo = 0;
	i = 0;
	j = 0;
	cont = 1;
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
		negativo += (str[i++] == '-');
	if (negativo % 2 == 1)
		str[j++] = '-';
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') && cont)
		{
			str[j++] = str[i++];
			cont = (str[i] >= '0' && str[i] <= '9');
		}
		else
			i++;
	}
	str[j] = '\0';
	return (ft_entero(str));
}
/*
int     main(void)
{
        char arr[] = "-+--+--+-dasf-dsa123f5h7j9";
        printf("ft_entero int= %d", ft_atoi(arr));
        return(0);
}*/
