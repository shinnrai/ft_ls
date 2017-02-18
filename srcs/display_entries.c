/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_entries.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 22:46:18 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/17 22:46:20 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static quad_t	get_total_blocks(t_list *file_list)
{
	quad_t	total_blocks;
	t_file	*file;

	total_blocks = 0;
	while (file_list)
	{
		file = (t_file*)file_list->content;
		total_blocks += file->blocks;
		file_list = file_list->next;
	}
	return (total_blocks);
}

void			display_entries_one_dir(t_file *directory, t_options options)
{
	quad_t	total_blocks;
	t_list	*entries;
	
	entries = ft_file_getentries(directory, "ft_ls: ");
	if (entries)
	{
		if (options & OPTION_LONG_FORMAT)
		{
			total_blocks = get_total_blocks(entries);
			ft_printf("%lld total\n", total_blocks);
		}
		ft_ls(entries, options);
	}
}

void			display_entries(t_list *file_list, t_options options)
{
	t_file	*directory;
	t_list	*node;
	t_list	*directory_list;

	directory_list = ft_lstcpyif(file_list, ft_lstif_file_isdir);
	node = directory_list;
	while (node)
	{
		directory = (t_file*)node->content;
		display_entries_one_dir(directory, options);
		node = node->next;
	}
	ft_lstdel(&directory_list, ft_lstdelfile);
}
