/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:43:51 by nlaftiss          #+#    #+#             */
/*   Updated: 2023/01/09 17:39:09 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This code is provided by a 42Madrid fellow, Leo González.
*/
#include "libft.h"
#include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	i;
	i = 0;
	lsrc = 0;
	ldest = 0;
	while (src[lsrc] != '\0')
		lsrc++;
	while (dst[ldest] != '\0')
		ldest++;
	if (dstsize <= ldest)
		return (dstsize + lsrc);
	while (src[i] != '\0' && (ldest + i) < (dstsize -1))
	{
		dst[ldest + i] = src[i];
		i++;
	}
	dst[ldest + i] = '\0';
	return (ldest + lsrc);
}
/* #include <stdio.h>
int	main(void)
{
	size_t	size;
	size_t	rtn;
	char	src[] = "";
	char	dest[18] = "";
	size = 0;
	printf("%s\n", src);
	printf("%s\n", dest);
	rtn = ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%zu\n", rtn);
	rtn = strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%zu\n", rtn);
	return(0);
} */
