/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:26:12 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:32:29 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
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
	printf("%d\n", ft_str_is_lowercase("asdssgdshdsjdjdsjj"));
	printf("%d\n", ft_str_is_lowercase("ABcs"));
    printf("%d\n", ft_str_is_lowercase(""));
}*/
