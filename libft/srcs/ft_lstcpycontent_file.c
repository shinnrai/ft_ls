/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpycontent_file.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 17:02:06 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/20 17:02:07 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstcpycontent_file(void *content, size_t content_size)
{
	t_file	*file;
	t_file	*new_file;

	(void)content_size;
	if (!content)
		return (NULL);
	file = (t_file*)content;
	new_file = ft_filecpy(file);
	return (new_file);
}
