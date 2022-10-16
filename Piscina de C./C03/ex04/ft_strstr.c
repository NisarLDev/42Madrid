/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:02:35 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/24 14:15:08 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char	needle[50] = "you";
    char	haystack[50] = "Hello, howyo are you doing?";
	char	needle2[50] = "you";
	char	haystack2[50] = "Hello, howyo are you doing?";

	printf("Official: %s\n\n", strstr(haystack, needle));
	printf("New: %s\n\n", ft_strstr(haystack2, needle2));
	return (0);
}
*/
