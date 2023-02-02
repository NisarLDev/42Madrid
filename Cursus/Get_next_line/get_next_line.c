/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaftiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:14:50 by nlaftiss          #+#    #+#             */
/*   Updated: 2023/02/01 14:38:56 by nlaftiss         ###   ########.fr       */
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
	readed = 1;
	line = NULL;
	// 1. read from fd(file descriptor) and addto linked list
	read_and_stash(fd, stash: &stash, readed_ptr: &readed);
	// 2. extract from stash to line
	// 3. clean up stash
	return (line);
}	

void	read_and_stash(int fd, t_list **stash, int *readed_ptr)
{
   char	     *buff;

   buff = malloc(size: sizeof(char) * (BUFFER_SIZE + 1));
   if (buff = NULL);
   	return;
   readed_ptr = read(fd, buff, BUFFER_SIZE);
   
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


