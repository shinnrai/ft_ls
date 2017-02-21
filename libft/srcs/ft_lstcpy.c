/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 22:39:14 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/15 22:39:15 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstcpy(t_list *list, void *(*copy_content)(void*, size_t))
{
	t_list	*copy_list;
	t_list	*new_node;
	void	*content;

	copy_list = NULL;
	while (list)
	{
		content = copy_content(list->content, list->content_size);
		new_node = ft_lstnew(content, list->content_size);
		free(content);
		ft_lstaddend(&copy_list, new_node);
		list = list->next;
	}
	return (copy_list);
}
