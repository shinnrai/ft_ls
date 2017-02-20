/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnot_dir_from_command_line.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/19 21:00:53 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/19 21:00:56 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	isnot_dir_from_command_line(void *content, size_t content_size)
{
	t_file	*file;

	(void)content_size;
	file = (t_file*)content;
	if (FT_ISDIR(file->mode) && !file->path)
		return (0);
	return (1);
}
