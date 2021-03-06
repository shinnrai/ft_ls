/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_getinfo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:55:40 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/21 15:00:16 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	set_link_name(t_file *file, struct stat *file_stat)
{
	size_t		link_name_size;
	char		*link_name;
	ssize_t		chars_written;

	if (!(FT_ISLNK(file->mode)))
	{
		file->linking_to = NULL;
		return ;
	}
	if (file_stat->st_size == 0)
		link_name_size = PATH_MAX;
	else
		link_name_size = (size_t)file_stat->st_size + 1;
	link_name = (char*)malloc(sizeof(char) * link_name_size);
	chars_written = readlink(file->full_name, link_name, link_name_size);
	link_name[chars_written] = '\0';
	file->linking_to = ft_strdup(link_name);
	free(link_name);
}

static void	set_info(t_file *file, struct stat *file_stat)
{
	struct passwd	*user_info;
	struct group	*group_info;

	file->blocks = file_stat->st_blocks;
	file->file_size = file_stat->st_size;
	file->hard_links = file_stat->st_nlink;
	file->user_id = file_stat->st_uid;
	file->group_id = file_stat->st_gid;
	user_info = getpwuid(file->user_id);
	if (user_info)
		file->user_name = ft_strdup(user_info->pw_name);
	else
		file->user_name = ft_itoa(file->user_id);
	group_info = getgrgid(file->group_id);
	if (group_info)
		file->group_name = ft_strdup(group_info->gr_name);
	else
		file->group_name = ft_itoa(file->group_id);
	file->time_of_modification = file_stat->st_mtimespec.tv_sec;
	file->time_of_modification_nsec = file_stat->st_mtimespec.tv_nsec;
	file->mode = file_stat->st_mode;
	file->major_device = (int)file_stat->st_rdev >> 24;
	file->minor_device = (int)file_stat->st_rdev & 0xFFFFFF;
	set_link_name(file, file_stat);
}

int			ft_file_getinfo(t_file *file, char *add_to_error)
{
	struct stat	file_stat;
	int			return_from_stat;

	return_from_stat = lstat(file->full_name, &file_stat);
	if (return_from_stat == -1)
	{
		if (add_to_error)
			ft_dprintf(STDERR_FILENO, "%s: ", add_to_error);
		ft_dprintf(STDERR_FILENO, "%s: %s\n", file->name, strerror(errno));
		return (-1);
	}
	set_info(file, &file_stat);
	return (0);
}
