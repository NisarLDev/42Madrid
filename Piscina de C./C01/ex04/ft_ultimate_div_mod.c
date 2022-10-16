/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:52 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 16:09:45 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*int	main(void)
{
	int c;
	int d;

	c = 42;
	d = 10;

	ft_ultimate_div_mod(&c, &d);
	printf("a = %d   b = %d", c, d);
}*/
