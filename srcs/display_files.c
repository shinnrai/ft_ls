/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:44:52 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/09 22:44:53 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_files(t_list *files_lst)
{
	t_file	*file;

	while (files_lst)
	{
		file = (t_file*)files_lst->content;
		ft_putendl(file->formatted_info);
		files_lst = files_lst->next;
	}
}
