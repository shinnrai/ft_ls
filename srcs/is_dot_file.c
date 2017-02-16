/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dot_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 23:00:11 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/15 23:00:13 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	is_dot_file(void *content, size_t content_size)
{
	t_file	*file;

	(void)content_size;
	file = (t_file*)content;
	if (file->name[0] == '.')
		return (1);
	return (0);
}
