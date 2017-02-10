/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:40:32 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/09 22:40:33 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	sort_files(t_list **files, t_options options)
{
	if (options & OPTION_T_SMALL)
		ft_filelst_qsort(files, ft_filecmptime);
	else
		ft_filelst_qsort(files, ft_filecmpname);
}
