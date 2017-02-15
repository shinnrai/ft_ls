/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_formatted_string.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:16:55 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/09 22:17:04 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	assign_formatted_string(t_list *files_lst, t_options options)
{
	t_file	*file;

	while (files_lst)
	{
		file = (t_file*)files_lst->content;
		if (options & OPTION_LONG_FORMAT)
			file->formatted_info = ft_file_getlongfmt(file);
		else
			file->formatted_info = ft_strdup(file->name);
		files_lst = files_lst->next;
	}
}
