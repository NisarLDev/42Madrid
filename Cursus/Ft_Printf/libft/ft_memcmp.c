/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:24:18 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/11/10 10:51:25 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)b1;
	ptr2 = (unsigned char *)b2;
	while (len--)
	{
		if (*ptr1++ != *ptr2++)
			return ((*--ptr1) - (*--ptr2));
	}
	return (0);
}
