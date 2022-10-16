/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:28:55 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:33:49 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{	
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
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
	printf("%d\n", ft_str_is_uppercase("AAAAA"));
	printf("%d\n", ft_str_is_uppercase("bbb"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/
