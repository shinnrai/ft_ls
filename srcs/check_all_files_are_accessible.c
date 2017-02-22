/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all_files_are_accessible.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 23:25:21 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/21 23:25:23 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		check_all_files_are_accessible(t_list *file_list)
{
	int			return_from_stat;
	t_file		*file;
	t_list		*node;
	struct stat	file_stat;

	node = file_list;
	while (node)
	{
		file = (t_file*)node->content;
		return_from_stat = lstat(file->full_name, &file_stat);
		if (return_from_stat == -1)
			return (-1);
		node = node->next;
	}
	return (0);
}
