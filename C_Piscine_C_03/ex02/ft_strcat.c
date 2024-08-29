/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:37:53 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/22 20:11:13 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_lenght(char *arr_a)
{
	int	i;

	i = 0;
	while (arr_a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	dest_len = ft_lenght(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
/*
int    main(void) {
    char s1[30] = "carpe Diem2 1234567";
    char s2[] = "carpe Diem";

    printf("Concatenando una string sobre otra: %s\n", ft_strcat(s1, s2));
    return 0;
}*/
