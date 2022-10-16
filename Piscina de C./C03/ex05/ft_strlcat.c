/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:11:14 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/24 14:15:43 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[50] = "This is";
    char dest[50] = "a potentially long string";
    unsigned int srcsize = strlen(src);
    unsigned int destsize = strlen(dest);
    printf("srcsize: %d\n", srcsize);
    printf("destsize: %d\n", destsize);
    printf("Official result: %lu\n", strlcat(dest, src, 5));


    char src2[50] = "This is";
    char dest2[50] = "a potentially long string";
    unsigned int srcsize2 = ft_strlen(src2);
    unsigned int destsize2 = ft_strlen(dest2);
    printf("srcsize2: %d\n", srcsize2);
    printf("destsize2: %d\n", destsize2);
    printf("Mine result: %d\n", ft_strlcat(dest2, src2, 5));



    return (0);
}
*/
