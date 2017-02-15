/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:58:10 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/05 18:58:15 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
**  This function displays info about the list of files.
*/

void	ft_ls(t_list *files, t_options options)
{
	t_list	*entries;

	if (!(options & OPTION_INCLUDE_DOT_FILES))
		exclude_dot_files(files);
	//ft_filelst_getinfo(files);
	assign_formatted_string(files, options);
	sort_files(&files, options);
	if (options & OPTION_REVERSE)
		ft_lstreverse(&files);
	display_files(files);

	entries = NULL;
	ft_lstdel(&entries, ft_lstdelfile);
}
