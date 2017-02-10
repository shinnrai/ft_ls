/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_options.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 15:52:54 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/03 15:52:55 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

/*
**  This function returns option corresponding to the character passed.
**  If there is no such option, prompts an error and exit the program.
*/

static t_options	determine_option(char option)
{
	if (option == 'l')
		return (OPTION_L_SMALL);
	else if (option == 'R')
		return (OPTION_R_CAPITAL);
	else if (option == 'r')
		return (OPTION_R_SMALL);
	if (option == 'a')
		return (OPTION_A_SMALL);
	else if (option == 't')
		return (OPTION_T_SMALL);
	else
	{
		ft_error("ft_ls: illegal option -- ");
		ft_error("");
		ft_error_exit("\nusage: ft_ls [-Ralrt] [file ...]");
	}
	return (0);
}

/*
**  This function read options from passed arguments and return them.
*/

t_options	read_options(int argc, char **argv)
{
	int			index_param;
	int 		index_char;
	char		option;
	t_options	result_options;

	index_param = 1;
	result_options = 0;
	while (index_param < argc && argv[index_param][0] == '-')
	{
		index_char = 1;
		while (argv[index_param][index_char])
		{
			option = argv[index_param][index_char];
			result_options |= determine_option(option);
			index_char++;
		}
		index_param++;
	}
	return (result_options);
}
