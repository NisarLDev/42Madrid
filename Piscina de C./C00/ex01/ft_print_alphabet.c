/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 01:11:25 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 02:26:03 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;

	start = 'a';
	while (start <= 'z')
	{
		write (1, &start, 1);
		start++;
	}
}
