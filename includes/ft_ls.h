/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 12:07:42 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/21 15:05:42 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "libft.h"
# include "standard_libraries.h"
# include "ft_ls_options.h"
# include "ft_ls_functions.h"

# define IS_FROM_COMMAND_LINE(fl) (fl && ((t_file*)fl->content)->path ? 0 : 1)

#endif
