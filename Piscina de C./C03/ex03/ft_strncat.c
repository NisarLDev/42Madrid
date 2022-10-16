/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:00:33 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/24 14:13:44 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i + j] = src [j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src[50] = "World";
    char dest[50] = "Hello";
    unsigned int nb = 3;
    strncat(dest, src, nb);
 	printf("Official src: %s\n", src);
    printf("Official dest: %s\n\n", dest);


    char src2[50] = "World";
    char dest2[50] = "Hello";
    ft_strncat(dest2, src2, nb);
    printf("New src: %s\n", src2);
    printf("New dest: %s\n", dest2);

    return (0);
}
*/
