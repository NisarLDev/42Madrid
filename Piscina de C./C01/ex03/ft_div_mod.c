/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:53:25 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 13:53:56 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int 	a;
	int		b;
	int 	*div;
	int		*mod;
	int		division;
	int		modulo;

	a = 42;
	b = 10;
	div = &division;
	mod = &modulo;
	ft_div_mod(a, b, div, mod);
	printf("div almacena:" "%d ", *div);
	printf("mod almacena:" "%d", *mod);
}*/
