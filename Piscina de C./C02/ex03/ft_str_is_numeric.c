/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:25:09 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:30:36 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("11221465456"));
    printf("%d\n", ft_str_is_numeric("abcde"));
    printf("%d\n", ft_str_is_numeric("*182adg"));
    printf("%d\n", ft_str_is_numeric(""));
 }*/
