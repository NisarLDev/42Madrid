/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:49:43 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/24 17:04:19 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
    char str1[20] = "abzcda";
    char str2[20] = "abxcae";
    unsigned int n = 5;

    printf("Oficial: %d\n", strncmp(str1, str2 , n));
    printf("Mine: %d\n", ft_strncmp(str1, str2 , n));

    return (0);
}
*/
