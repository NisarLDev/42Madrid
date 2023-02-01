/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:33:53 by nlaftiss          #+#    #+#             */
/*   Updated: 2023/02/01 13:43:01 by nlaftiss         ###   ########.fr       */
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


