/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilzhabur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:02:56 by ilzhabur          #+#    #+#             */
/*   Updated: 2022/08/28 13:50:19 by ilzhabur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find);
int		ft_atoi(char *str);
int		ft_strlen(char *s);
void	dict_open(void);

int	check_argv1(char *str, char *to_find)
{
	if (ft_strstr(str, to_find))
		return (1);
	return (0);
}

int	is_digit(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	argv1(char *str)
{
	unsigned int	n;

	n = ft_atoi(str);
	if (!(is_digit(str)))
	{
		write(2, "Error\n", 6);
	}
	else
	{
		dict_open();
	}
}

int	main(int ac, char **av)
{
	if (!(ac == 2 || ac == 3))
	{
		write(2, "Error\n", 6);
	}
	else
	{
		if (ac == 2)
		{
			argv1(av[1]);
		}
		else if (ac == 3)
		{
			if (check_argv1(av[1], ".dict"))
			{
				argv1(av[2]);
			}
			else
			{
				write(2, "Dict Error\n", 11);
			}
		}
	}
	return (0);
}
