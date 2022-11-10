/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:07:52 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/10/30 14:26:05 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_replace(char *str,	const char *old_word, const char *new_word)
{
	int		i;
	int		total_size;
	char	*ptr;
	char	*new_str;

	if (!str || !old_word || !new_word)
	{
		ft_free_ptr((void *)&str);
		return (NULL);
	}
	ptr = ft_strnstr(str, old_word, ft_strlen(str));
	if (!ptr)
		return (str);
	total_size = ft_strlen(str) - ft_strlen(old_word) + ft_strlen(new_word) + 1;
	new_str = (char *)malloc(sizeof(char) * total_size);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, str, (ptr - str) + 1);
	ft_strlcat(new_str, new_word, total_size);
	i = (ptr - str) + ft_strlen(old_word);
	ft_strlcat(new_str, &str[i], total_size);
	ft_free_ptr((void *)&str);
	return (new_str);
}
