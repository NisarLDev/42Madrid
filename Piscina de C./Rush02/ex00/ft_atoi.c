/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iquesada <iquesada@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:38:13 by iquesada          #+#    #+#             */
/*   Updated: 2022/08/28 13:39:19 by iquesada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr1(char *s, int i)
{
	int		n;

	n = 0;
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		n *= 10;
		n += s[i] - '0';
		i++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] <= 32)
		i++;
	n = ft_putnbr1(str, i);
	return (n);
}
