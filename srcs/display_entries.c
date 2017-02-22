/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_entries.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 22:46:18 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/21 15:06:50 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void			display_entries_one_dir(t_file *directory, t_options options)
{
	t_list	*entries;

	entries = ft_file_getentries(directory, "ft_ls");
	if (entries)
		ft_ls(entries, options);
}

void			display_entries(t_list *file_list, t_options options,
								bool new_line)
{
	t_file	*directory;
	t_list	*node;
	t_list	*directory_list;

	directory_list = ft_lstcpyif(file_list, ft_lstif_file_isdir,
									ft_lstcpycontent_file);
	node = directory_list;
	while (node)
	{
		directory = (t_file*)node->content;
		if (IS_FROM_COMMAND_LINE(file_list) ||
			(ft_strcmp(directory->name, ".") &&
			ft_strcmp(directory->name, "..")))
		{
			(new_line) ? ft_printf("\n") : (0);
			ft_printf("%s:\n", directory->full_name);
			display_entries_one_dir(directory, options);
		}
		new_line = true;
		node = node->next;
	}
	ft_lstdel(&directory_list, ft_lstdelfile);
}
