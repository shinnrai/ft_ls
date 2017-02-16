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

void	ft_ls(t_list *file_list, t_options options)
{
	t_list	*print_file_list;

	ft_filelst_qsort(&file_list, ft_filecmpname);

	ft_filelst_getinfo(&file_list, "ft_ls: ");

	if (!(options & OPTION_INCLUDE_DOT_FILES))
		ft_lstdelif(&file_list, is_dot_file, ft_lstdelfile);



	if (options & OPTION_TIME_SORT)
		ft_filelst_qsort(&file_list, ft_filecmptime);

	if (options & OPTION_REVERSE)
		ft_lstreverse(&file_list);

	print_file_list = ft_lstcpy(file_list);

	ft_lstdelif(&print_file_list, is_dir_from_command_line, ft_lstdelfile);

	if (options & OPTION_LONG_FORMAT)
		ft_filelst_printlongformat(print_file_list);
	else
		ft_filelst_print(print_file_list);
}
