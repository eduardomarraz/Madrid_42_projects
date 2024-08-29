/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:26:41 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/23 12:39:02 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] != '\0' && to_find[j] != '\0'
				&& str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main(void) {
    char str[] = "Perro, gato, raton";
    char to_find[] = "raton";

    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("Subcadena encontrada: %s\n", result);
    } else {
        printf("Subcadena no encontrada.\n");
    }
    printf("funcion strstr original= %s", strstr(str, to_find));

    return 0;
}*/
