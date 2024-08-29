/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:37:53 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/23 10:25:15 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_lenght(char *arr_a)
{
	unsigned int	i;

	i = 0;
	while (arr_a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_lenght(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int    main(void) {
    unsigned int nb = 10;
    char s1[30] = "carpe Diem2 1234567";
    char s2[] = "Segunda string";

    printf("Concatenando una string sobre otra: %s\n", ft_strncat(s1, s2, nb));
    return 0;
}*/
