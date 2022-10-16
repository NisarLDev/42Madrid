/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:14:52 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 02:30:08 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
	(j = i);
		while (++j <= 99)
		{
			ft_putchar((char)(i / 10 + '0'));
			ft_putchar((char)(i % 10 + '0'));
			ft_putchar(' ');
			ft_putchar((char)(j / 10 + '0'));
			ft_putchar((char)(j % 10 + '0'));
			if (i != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
