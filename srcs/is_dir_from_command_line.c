/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dir_from_command_line.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 23:01:00 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/15 23:01:03 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	is_dir_from_command_line(void *content, size_t content_size)
{
	t_file	*file;

	(void)content_size;
	file = (t_file*)content;
	if (FT_ISDIR(file->mode) && !file->path)
		return (1);
	return (0);
}
