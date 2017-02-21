/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpycontent_memcpy.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 17:02:13 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/20 17:02:14 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstcpycontent_memcpy(void *content, size_t content_size)
{
	void	*copy_content;

	if (!content)
		return (NULL);
	copy_content = malloc(content_size);
	copy_content = ft_memcpy(copy_content, content, content_size);
	return (copy_content);
}
