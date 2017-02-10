/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 19:08:42 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/05 19:08:46 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelfile(void *file, size_t content_size)
{
	t_file	*file_to_delete;

	file_to_delete = (t_file*)file;
	(void)content_size;
	(file_to_delete->name) ? free(file_to_delete->name) : (0);
	(file_to_delete->path) ? free(file_to_delete->path) : (0);
	if (file_to_delete->is_directory)
	{
		if (file_to_delete->directory_stream)
			closedir(file_to_delete->directory_stream);
		ft_lstdel(&file_to_delete->files_inside, ft_lstdelfile); // maybe shouldn't do it? TODO check what to delete in ft_ls and where
	}
}
