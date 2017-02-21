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

	if (!file)
		return ;
	file_to_delete = (t_file*)file;
	(void)content_size;
	ft_filedel(file_to_delete);
}
