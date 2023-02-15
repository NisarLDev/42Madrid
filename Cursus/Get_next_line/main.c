/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <nlaftiss@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:33:53 by nlaftiss          #+#    #+#             */
/*   Updated: 2023/02/15 17:03:20 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	int	fd;
	char *line;

	fd = open("test/sample" O_RDONLY)
	while (1)
	{
		line = get_next_line(fd);
		if (line = NULL)
			break;
		printf("%s", line);
		free(line)
	}	
	return (0);
}


