/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduamart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:36:06 by eduamart          #+#    #+#             */
/*   Updated: 2024/08/21 17:24:27 by eduamart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void) {
    char dest[20]; // Suficiente espacio en dest
    char src[] = "cats are beautiful";
    
    // Copiar hasta 5 caracteres de src a dest
    ft_strncpy(dest, src, 20);
    
    // Mostrar el contenido de dest y su longitud
    printf("Cadena copiada: %s\n", dest);
    printf("Contenido completo de dest (con caracteres nulos visibles):\n");
    
    for (int i = 0; i < 20; i++) {
        printf("dest[%d]: %c (ASCII: %d)\n", i, dest[i], dest[i]);
    }
    
    return 0;
}*/
