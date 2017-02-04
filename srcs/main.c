/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 14:01:50 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 14:01:52 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
**  Program works as follows(not including handling errors):
**  - Read arguments and sort .
**  - For each received directory execute ft_ls.
**  - Collect all entries in the directory.
**  - If -a specified, include ".*" directories.
**  - Sort entries either by time (if -t specified) or lexicographically.
**  - If -e specified, format each entry.
**  - If -r specified, reverse entries.
**  - Print formatted entries of this directory.
**  - If -R specified, call the ft_ls function again on each directory.
**  -
**  -
*/

int	main(int argc, char **argv)
{
	t_options	options;

	read_arguments(argc, argv, &options);

}
