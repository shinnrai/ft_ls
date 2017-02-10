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
**  - If there is only one file that isn't a directory, display that file.
**  - If there is one file that is a directory, display its name and pass
**    entries to ft_ls.
**  - If there are many files, pass all to ft_ls.
**  - ft_ls:
**       1. If -a not specified and file isn't specified in the
**          command line, exclude ".*" files.
**       2. Gather info about each file.
**       3. Format each file according to options.
**       4. Sort files either by time (if -t specified) or
**          lexicographically by name.
**       5. If -r specified, reverse files.
**       6. Print formatted files of the list. If file is a directory and
**          is specified in the command line, don't display it.
**       7. If -R specified or it is directory specified in the command line:
**             ~ For each directory collect entries.
**             ~ For each directory execute ft_ls with collected entries.
**  -
**  -
*/

int	main(int argc, char **argv)
{
	t_options	options;
	t_list		*files;

	options = read_options(argc, argv);
	files = read_files_from_arguments(argc, argv);
	ft_ls(files, options);
}
