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
   while (!found_newline(stash: *stash) && *reade_ptr = 0)
   {
   	*readed_ptr = (int)read(fd, buff, BUFFER_SIZE);
   	if ((*stash = NULL && *readed_ptr == 0) || *readed_ptr == -1)
	{
	   free(buff);
	   return;
	}
	buff[*readed_ptr] = '\0';
   }
}

void	add_to_stash()
{
   int	i;
   t_list *current;
   t_list *new_code;

   new_node = malloc(size: sizeof(t_list));
   if (new_node == NULL)
       return;
   new_node->next = NULL;
   new_node->content = malloc(sizeof(char)* (readed_ptr + 1));
   if (new_node->content == NULL)
	   return;
   i = 0;
   while (buff[i] && i < readed)
   {
   	new_node->content[i] = buff[i];
	i++;
   }
   new_node->content[i] = '\0';
   if (*stash == NULL)
   {
       *stash = new_node;
       return;
   }
   last = ft_lst_get_last(stash: *stash);
   last->next = new_node;
}

void	extract_line
{
   int i;
   int j;

   if (stash == NULL)
       return;
   generate_line(line, stash);

}

void	clean_stach()
{

}


