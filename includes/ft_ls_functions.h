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
void		ft_ls(t_list *files, t_options options);
void		exclude_dot_files(t_list *files);
void		assign_formatted_string(t_list *files_lst, t_options options);
void		sort_files(t_list **files, t_options options);
void		display_files(t_list *files_lst);

#endif
