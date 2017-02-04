/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_arguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 13:49:16 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 13:49:23 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
**  This function reads arguments from command line, reads and writes options
**  into variable options, receives, sorts and returns entered files.
*/

t_list	*read_arguments(int argc, char **argv, t_options *options)
{
	t_list		*received_files;
	int 		index;




	received_files = NULL;
	*options = read_options(argc, argv);
	index = 1;
	while (index < argc && argv[index][0] == '-')
		index++;
	ft_strqsort(&argv[index], argc - index);
	while (index < argc)
	{
		ft_lstadd(&received_files, ft_lstnew(argv[index], sizeof(char *)));
		index++;
	}
	//should do array of files?
/// left here
	return (received_files);
}
