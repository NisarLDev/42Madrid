/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:33:53 by nlaftiss          #+#    #+#             */
/*   Updated: 2023/03/23 18:14:17 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

void	ft_exit(void)
{
	system("leak -q a.out");
}

int main()
{
	int	fd;
	char *line;

	atexit(ft_exit);
	fd = open("test/sample", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		printf("%s", line);
		free(line);
	}	
	return (0);
}


