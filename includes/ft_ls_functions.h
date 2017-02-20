/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:01:46 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 15:01:47 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_FUNCTIONS_H
# define FT_LS_FUNCTIONS_H

t_options	read_options(int argc, char **argv);
t_list		*read_files_from_arguments(int argc, char **argv);
void		ft_ls(t_list *file_list, t_options options);
int			is_dot_file(void *content, size_t content_size);
int			isnot_dir_from_command_line(void *content, size_t content_size);
void		display_entries(t_list *file_list, t_options options,
			bool new_line);
void		display_entries_one_dir(t_file *directory, t_options options);

#endif
