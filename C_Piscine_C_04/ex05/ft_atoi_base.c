/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 10:41:34 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/28 11:12:48 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] < 33 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i > 1);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	handle_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign = -1;
		(*str)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	base_len;
	int	sign;
	int	index;

	result = 0;
	if (!is_valid_base(base))
		return (0);
	sign = handle_sign(&str);
	base_len = 0;
	while (base[base_len])
		base_len++;
	while (*str)
	{
		index = get_index(*str, base);
		if (index == -1)
			return (0);
		result = result * base_len + index;
		str++;
	}
	return (result * sign);
}
/*
int main() {
    char str1[] = "1011";
    char base1[] = "01";
    // 11 en base 2 -> 11 en decimal
    printf("Resultado: %d\n", ft_atoi_base(str1, base1));

    char str2[] = "7B";
    char base2[] = "0123456789ABCDEF";
    // 7B en base 16 -> 123 en decimal
    printf("Resultado: %d\n", ft_atoi_base(str2, base2));

    char str3[] = "1011";
    char base3[] = "0123456789";
    // 1011 en base 10 -> 1011 en decimal
    printf("Resultado: %d\n", ft_atoi_base(str3, base3));

    char str4[] = "FF";
    char base4[] = "0123456789ABCDEF";
    // FF en base 16 -> 255 en decimal
    printf("Resultado: %d\n", ft_atoi_base(str4, base4));

    return 0;
}*/
