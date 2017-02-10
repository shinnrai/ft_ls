/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelst_getinfo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 21:44:04 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/09 21:44:05 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_filelst_getinfo(t_list *files)
{
	t_list	*node;

	node = files;
	while (node)
	{
		ft_filegetinfo((t_file*)node->content);
		node = node->next;
	}
}
