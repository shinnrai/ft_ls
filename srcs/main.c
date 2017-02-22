/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 14:01:50 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 14:01:52 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
**  Program works as follows(not including handling errors):
**  - Read options and arguments.
**  - Sort read files.
**  - If there is one file that is a directory, pass its entries to ft_ls.
**  - If there is only one file that isn't a directory, display that file.
**  - If there are many files, pass all to ft_ls.
**  - ft_ls:
**       1. Sort files lexicographically by name.
**       2. Get info about each file.
**       3. If -a not specified and file isn't specified in the
**          command line, exclude ".*" files.
**       2. If -t specified, sort by time.
**       3. If -r specified, reverse files.
**       4. Print files of the list:
**             ~ If file is a directory and is specified in the command line,
**               exclude it from print file list.
**             ~ If -l is specified, print files in long format.
**               Otherwise, print files.
**       5. If -R specified or it is directory specified in the command line,
**          display entries of the directories:
**             ~ For each directory display its name.
**             ~ For each directory collect entries.
**             ~ For each directory execute ft_ls with collected entries.
**  ----------------------------------------------------------------------------
**  * specified in the command line = path equal NULL
*/

int	main(int argc, char **argv)
{
	t_options	options;
	t_file		*file;
	t_list		*file_list;
	int			error;

	options = read_options(argc, argv);
	file_list = read_files_from_arguments(argc, argv);
	ft_filelst_qsort(&file_list, ft_filecmpname);
	if (!file_list->next)
	{
		file = (t_file*)file_list->content;
		error = ft_file_getinfo(file, "ft_ls");
		if (!error)
		{
			if (FT_ISDIR(file->mode))
				display_entries_one_dir(file, options);
			else if (options & OPTION_LONG_FORMAT)
				ft_filelst_printlongformat(file_list);
			else
				ft_filelst_print(file_list);
		}
		ft_lstdel(&file_list, ft_lstdelfile);
	}
	else
	{
		error = check_all_files_are_accessible(file_list);
		ft_ls(file_list, options);
	}
	if (error)
		exit(EXIT_FAILURE);
	exit(EXIT_SUCCESS);
}
