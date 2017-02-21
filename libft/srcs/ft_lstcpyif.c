/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpyif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 22:08:26 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/21 15:04:38 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcpyif(t_list *list, int (*needs_to_copy)(void*, size_t),
					void *(*copy_content)(void*, size_t))
{
	t_list	*copy_list;
	t_list	*new_node;
	void	*content;

	copy_list = NULL;
	while (list)
	{
		if (needs_to_copy(list->content, list->content_size))
		{
			content = copy_content(list->content, list->content_size);
			new_node = ft_lstnew(content, list->content_size);
			free(content);
			ft_lstaddend(&copy_list, new_node);
		}
		list = list->next;
	}
	return (copy_list);
}
