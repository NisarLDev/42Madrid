/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilzhabur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:52:51 by ilzhabur          #+#    #+#             */
/*   Updated: 2022/08/28 14:12:19 by ilzhabur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *s);

void	dict_open(void)
{
	int		fd;
	ssize_t	nr_bytes;
	char	*buf;

	fd = open("./numbers.dict", O_RDONLY);
	buf = malloc(1000 * sizeof(char));
	if (fd == -1)
	{
		write(2, "Dict Error\n", 11);
	}
	else
	{
		nr_bytes = read(fd, buf, 1000);
		close(fd);
		if (nr_bytes == 0)
		{
			write(2, "Dict Error\n", 11);
		}
		else
		{
			ft_putstr(buf);
		}
		free(buf);
	}
}
