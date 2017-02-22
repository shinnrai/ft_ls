/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contains_special_files.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 00:53:35 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/22 00:53:36 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_filelst_if_specialfiles(t_list *file_list)
{
	t_file		*file;
	t_list		*node;

	node = file_list;
	while (node)
	{
		file = (t_file*)node->content;
		if (FT_ISBLK(file->mode) || FT_ISCHR(file->mode))
			return (true);
		node = node->next;
	}
	return (false);
}
