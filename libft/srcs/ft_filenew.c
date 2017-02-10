/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 18:52:07 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/05 18:52:08 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file	*ft_filenew(char *name, char *path)
{
	t_file	*new_file;

	new_file = (t_file*)malloc(sizeof(t_file));
	new_file->name = ft_strdup(name);
	new_file->path = ft_strdup(path);
	new_file->formatted_info = NULL;

	new_file->is_directory = false;
	new_file->time_of_modification = NULL;

	new_file->directory_stream = NULL;
	new_file->files_inside = NULL;
	return (new_file);
}
