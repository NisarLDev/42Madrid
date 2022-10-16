/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:51:37 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/24 14:12:27 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char src[50] = "World";
    char dest[50] = "Hello";
    strcat(dest, src);
 	printf("Official src: %s\n", src);
    printf("Official dest: %s\n\n", dest);

    char src2[50] = "World";
    char dest2[50] = "Hello";
    ft_strcat(dest2, src2);
    printf("New src: %s\n", src2);
    printf("New dest: %s\n", dest2);
    return (0);
}
*/
