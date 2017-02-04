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

t_list		*read_arguments(int argc, char **argv, t_options *options);
t_options	read_options(int argc, char **argv);

#endif
