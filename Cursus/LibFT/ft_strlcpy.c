/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:44:03 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:42:28 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	srcsize;

	srcsize = ft_strlen(src);
	cont = 0;
	if (size != 0)
	{
		while (cont < size - 1 && src[cont] != '\0')
		{
			dest[cont] = src[cont];
			cont++;
		}
		dest[cont] = '\0';
	}
	return (srcsize);
}

/*int	main(void)
{
	char src[] = "La lala lalala lalalala lalalalala";
	char dest[] = "";
	printf("Tamaño: %d\nResultado destino: %s", ft_strlcpy(dest, src, 100), dest);
	return (0);
}*/
