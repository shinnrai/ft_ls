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
**  - name:                  the name of the file
**  - path:                  the path from the primal directory(one that was
**                           called by executable ft_ls)
**  - formatted_info:        the line that is formatted according to ft_ls
**                           options
**  - is_directory:          boolean value that indicates whether this file is
**                           a directory
**  - time_of_modification:  time of last modification to the file
**  - directory_stream:      if is_directory == true, the directory stream
**                           associated with the directory;
**                           otherwise NULL
**  - files_inside:          if is_directory == true, list of files inside
**                           the directory (including . and ..);
**                           otherwise NULL
**  -
**  -
**  -
**  -
*/

typedef struct	s_file
{
	char		*name;
	char		*path;
	char 		*formatted_info;

	bool		is_directory;
	time_t		*time_of_modification;

	DIR			*directory_stream;
	t_list		*files_inside;
}				t_file;
//TODO check where to initialize files_inside and where
#endif
