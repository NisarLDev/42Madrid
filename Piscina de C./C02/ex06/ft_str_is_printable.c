/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:31:04 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:35:11 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
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
 	int i;
    
    i = 1;
    char c[127];
    while(i < 126)
    {
        c[i] = i;
        i++;
    }
    printf("%d\n", ft_str_is_printable("sgshshrrjrjfdhqwrqsvdssbdfgdfh"));
    printf("%d\n", ft_str_is_printable(c));
	printf("%d\n", ft_str_is_printable(""));
}*/
