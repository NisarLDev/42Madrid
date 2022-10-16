/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  nlaftiss <nlaftiss@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 19:35:25 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:38:00 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*init;

	init = str;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
		{
			*str = *str + 32;
		}
		str++;
	}
	return (init);
}

/*int main(void)
{
	char to_lower_case[] = "OIO";
	printf("%s", ft_strlowcase(to_lower_case));
    return (0);
}*/
