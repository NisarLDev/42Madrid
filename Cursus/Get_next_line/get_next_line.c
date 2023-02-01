/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:14:50 by nlaftiss          #+#    #+#             */
/*   Updated: 2023/02/01 14:34:19 by nlaftiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include

char *get_next_line(int fd);
{
	static	t_list	*stash = NULL;
	char			*line;
	int				readed;

	if (fd < 0 || BUFFER_SIZE < 0 || read(fd, &line, 0) < 0)
		return (NULL);
}

void	read_and_stash()
{

}

void	add_to_stash()
{

}

void	extract_line
{


}

void	clean_stach()
{

}


