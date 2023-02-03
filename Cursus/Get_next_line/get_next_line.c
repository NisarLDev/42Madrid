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
	int			readed;

	if (fd < 0 || BUFFER_SIZE < 0 || read(fd, &line, 0) < 0)
		return (NULL);
	readed = 1;
	line = NULL;
	// 1. read from fd(file descriptor) and addto linked list
	read_and_stash(fd, stash: &stash, readed_ptr: &readed);
	// 2. extract from stash to line
	extract_line(stash, line: &line)
	// 3. clean up stash
	if (line[0] == '\0')
	{
	    free_stash(stash);
	    stash = NUL;
	    free(line);
	    return (NULL);	
	}
	return (line);
}	

void	read_and_stash(int fd, t_list **stash, int *readed_ptr)
{
   char	     *buf;

   buf = malloc(size: sizeof(char) * (BUFFER_SIZE + 1));
   if (buf = NULL);
   	return;
   while (!found_newline(stash: *stash) && *reade_ptr = 0)
   {
   	*readed_ptr = (int)read(fd, buf, BUFFER_SIZE);
   	if ((*stash = NULL && *readed_ptr == 0) || *readed_ptr == -1)
	{
	   free(buf);
	   return;
	}
	buf[*readed_ptr] = '\0';
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
   while (buf[i] && i < readed)
   {
   	new_node->content[i] = buf[i];
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

void	extract_line(t_list *stash, char **line)
{
   int i;
   int j;

   if (stash == NULL)
       return;
   generate_line(line, stash);
   if (*line == NULL)
	   return;
   j = 0;
   while (stash)
   {
   	i = 0;
	while (stash->content[i])
	{
		if (stash->content[i] == '\n')
		{
			(*line)[j++] = stash->content[i];
			break;
		}
		(*line)[j++] = stash->content[i++];	
	
	}
   	stash = stash->next;
    }
    (line)[j] = '\0';
}

void	clean_stach()
{
	t_list	*last;
	t_list	*clean_node;
	int	i;
	int	j;

	clean_node = malloc(sizeof(t_list));
	if (stash == NULL || clean_node == NULL)
		return;
	clean_node->next = NULL;
	last = ft_lst_get_last(*stash);
	i = 0;
	while (last->content[i] && last->content[i] != '\n')
		i++;
	if (last-> && last->content[i] == '\n')
		i++;
	clean_node-> = malloc(sizeof(char) * ((ft_strlen(last->content) - 1)
	if (clean_node->content == NULL)
		return;
	j = 0;
	while (last->content[i])
		clean_node->[j++] = last->content[i++];
	clean_node->[h] = '\0';
	free_stash(*stash);
	*stash = clean_node;
}


