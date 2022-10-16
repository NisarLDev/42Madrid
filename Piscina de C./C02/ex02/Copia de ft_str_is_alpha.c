/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:16:07 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:29:24 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
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
	
	printf("%d\n", ft_str_is_alpha("ABCabc"));
	printf("%d\n", ft_str_is_alpha("*?123,"));
	printf("%d\n", ft_str_is_alpha(""));
}*/
