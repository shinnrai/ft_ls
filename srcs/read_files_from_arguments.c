/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_files_from_arguments.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:24:32 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/21 15:06:08 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
**  This function receives and returns entered files from command line.
*/

t_list	*read_files_from_arguments(int argc, char **argv)
{
	t_list		*received_files;
	int			index;
	t_file		*file_to_add;
	t_list		*node_to_add;

	received_files = NULL;
	index = 1;
	while (index < argc && argv[index][0] == '-')
		index++;
	if (argc == index)
	{
		file_to_add = ft_filenew(".", NULL);
		node_to_add = ft_lstnew(file_to_add, sizeof(t_file));
		ft_lstadd(&received_files, node_to_add);
	}
	else
		while (index < argc)
		{
			file_to_add = ft_filenew(argv[index], NULL);
			node_to_add = ft_lstnew(file_to_add, sizeof(t_file));
			ft_lstadd(&received_files, node_to_add);
			index++;
		}
	return (received_files);
}
