/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 19:24:28 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/10/05 12:34:26 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memrcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if ((!dst && !src) || !len)
		return (dst);
	ptr_dest = (unsigned char *)dst + len - 1;
	ptr_src = (unsigned char *)src + len - 1;
	while (len--)
		*ptr_dest-- = *ptr_src--;
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((!dst && !src) || !len)
		return (dst);
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	else
		return (memrcpy(dst, src, len));
}
