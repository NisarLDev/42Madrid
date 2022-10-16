/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:43:52 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:25:07 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*pointer;

	pointer = dest;
	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}
	*dest = '\0';
	return (pointer);
}

/*int	main(void)
{
	char	destino_array[] = "sfff34fawfewafw";	
	char	fuente_array[] = "I love/hate code";

	printf ("%s",ft_strcpy(destino_array, fuente_array));
	return (0);
}*/
