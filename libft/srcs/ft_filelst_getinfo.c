/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelst_getinfo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 21:44:04 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/22 02:02:30 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_filelst_getinfo(t_list **file_list, char *add_to_error)
{
	t_list	*previous_node;
	t_list	*current_node;
	t_list	*node_to_delete;
	bool	error;

	error = false;
	previous_node = NULL;
	current_node = *file_list;
	while (current_node)
		if (ft_file_getinfo((t_file*)current_node->content, add_to_error) == -1)
		{
			node_to_delete = current_node;
			current_node = current_node->next;
			(previous_node) ? previous_node->next = current_node : (0);
			(!previous_node) ? *file_list = current_node : (0);
			ft_lstdelone(&node_to_delete, ft_lstdelfile);
			error = true;
		}
		else
		{
			previous_node = current_node;
			current_node = current_node->next;
		}
	return (error) ? -1 : 0;
}
