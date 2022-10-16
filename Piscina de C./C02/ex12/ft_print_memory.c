/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:45:05 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/22 19:49:02 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

#define MAX_PAGE_SIZE 14

void	ft_buffer_number(int number, int radix, int buffer[], int index)
{
	if (number > radix - 1)
		ft_buffer_number(number / radix, radix, buffer, index + 1);
	buffer[index] = number % radix;
}

void	ft_write_hex(unsigned int number, int radix, int char_count)
{
	int	buffer[MAX_PAGE_SIZE + 1];
	int	index;

	index = -1;
	while (index++ < MAX_PAGE_SIZE)
		buffer[index] = 0;
	ft_buffer_number(number, radix, buffer, 0);
	index = -1;
	while (index++ < char_count)
		write(1, &"0123456789abcdefgh"[buffer[char_count - index]], 1);
}
