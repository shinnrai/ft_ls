/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filedel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 16:53:37 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/20 16:53:39 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_filedel(t_file *file_to_delete)
{
	FREE_IFN_NULL(file_to_delete->name);
	FREE_IFN_NULL(file_to_delete->path);
	FREE_IFN_NULL(file_to_delete->full_name);
	FREE_IFN_NULL(file_to_delete->linking_to);
	FREE_IFN_NULL(file_to_delete->user_name);
	FREE_IFN_NULL(file_to_delete->group_name);
	free(file_to_delete);
}
