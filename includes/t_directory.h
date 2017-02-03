/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_directory.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 12:36:09 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 12:54:33 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DIRECTORY_H
# define T_DIRECTORY_H

/*
**  Fields of the structure:
**  - name:		the name of the directory
**  - path:		the path from the primal directory(one that was called by main)
*/

typedef struct	s_directory
{
	char		*name;
	char		*path;
}				t_directory;

#endif
