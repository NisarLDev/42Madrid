/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 21:55:54 by nlaftiss          #+#    #+#             */
/*   Updated: 2022/08/27 21:58:03 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter1;

	counter1 = 0;
	while (str[counter1] != '\0')
	{
		counter1++;
	}
	return (counter1);
}
/*#include <stdio.h>
int main(){
char string_1[100] = "The C programming language was created in the year nineteen seventy-two. ";
ft_strlen(string_1);
printf("Length of the string:%d\n",ft_strlen(string_1));
}*/
