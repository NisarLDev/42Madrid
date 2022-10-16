/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:11:53 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 14:04:40 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

/*int    main(void)
{
    int    tab[] = {1, 2, 3, 4, 5, 6};

    ft_rev_int_tab(tab, 6);
    printf("%d", tab[0]);
    printf("%d", tab[1]);
    printf("%d", tab[2]);
    printf("%d", tab[3]);
    printf("%d", tab[4]);
    printf("%d", tab[5]);
}*/
