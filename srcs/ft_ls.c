/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 12:35:10 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 12:56:56 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
**  Program works as follows(not including handeling errors):
**  - Read arguments.
**  - Open directory.
**  - Collect all entries.
**  - If -a specified, include ".*" directories.
**  - Sort either by time (if -t specified) or lexicographically.
**  - If -e specified, format each entry.
**  - If -r specified, reverse entries.
**  - Print formatted entries of this directory.
**  - If -R specified, call the ft_ls function again on each directory.
**  -
**  -
*/

void	ft_ls(t_directory *directory)
{
	(void)directory;
}
