/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_file.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:19:57 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 15:19:59 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_FILE_H
# define T_FILE_H

# include "ft_ls_options.h"

/*
**  Fields of the structure:
**  - name:             the name of the file
**  - path:             the path from the primal directory(one that was called
**                      by executable ft_ls)
**  - is_directory:     boolean value that indicates whether this file is
**                      a directory
**  - directory_stream: if is_directory == true, the directory stream
**                      associated with the directory, otherwise NULL
**  - options:          the options passed to executable ft_ls
**  -
**  -
**  -
**  -
**  -
*/

typedef struct	s_file
{
	char		*name;
	char		*path;
	bool		is_directory; //maybe change to mode_t ?
	DIR			*directory_stream;
	t_options	options;
}				t_file;

#endif
