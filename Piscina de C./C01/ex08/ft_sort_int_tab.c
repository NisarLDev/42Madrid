/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:35:47 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 18:01:37 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	y;

	i = 0;
	while (i < size)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[i] > tab[y])
			{
				swap = tab[i];
				tab[i] = tab [y];
				tab[y] = swap;
				i = 0;
			}
			y++;
		}
			i++;
	}
}

/*int	main(void)
{
	int	tab[] = {1, 4, 2, 3};

	ft_sort_int_tab(tab, 4);
	printf("%d ", tab[0]);
	printf("%d ", tab[1]);
	printf("%d ", tab[2]);
	printf("%d ", tab[3]);
}*/
