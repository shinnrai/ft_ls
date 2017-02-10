/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exclude_dot_files.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 14:40:22 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/09 14:40:23 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	exclude_dot_files(t_list *files)
{
	t_list	*previous_node;
	t_list	*current_node;
	t_file	*inspected_file;
	t_list	*node_to_delete;

	previous_node = NULL;
	current_node = files;
	while (current_node)
	{
		inspected_file = (t_file*)current_node->content;
		if (inspected_file->name[0] == '.' && inspected_file->path)
		{
			node_to_delete = current_node;
			current_node = current_node->next;
			if (previous_node)
				previous_node->next = current_node;
			ft_lstdelone(&node_to_delete, ft_lstdelfile);
		}
		else
		{
			previous_node = current_node;
			current_node = current_node->next;
		}
	}
}
