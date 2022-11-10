/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:45:12 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/10/22 15:55:02 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	litsize;

	litsize = ft_strlen(little);
	if (!litsize)
		return ((char *)big);
	while (*big && litsize <= len--)
	{
		if (!ft_strncmp(big, little, litsize))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
