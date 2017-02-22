/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filecpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 16:52:46 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/20 16:52:48 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file	*ft_filecpy(t_file *file)
{
	t_file	*new_file;

	if (!file)
		return (NULL);
	new_file = ft_filenew(file->name, file->path);
	new_file->time_of_modification = file->time_of_modification;
	new_file->time_of_modification_nsec = file->time_of_modification_nsec;
	new_file->file_size = file->file_size;
	new_file->blocks = file->blocks;
	new_file->user_id = file->user_id;
	new_file->user_name = ft_strdup(file->user_name);
	new_file->group_name = ft_strdup(file->group_name);
	new_file->group_id = file->group_id;
	new_file->linking_to = ft_strdup(file->linking_to);
	new_file->mode = file->mode;
	new_file->hard_links = file->hard_links;
	new_file->minor_device = file->minor_device;
	new_file->major_device = file->major_device;
	return (new_file);
}
