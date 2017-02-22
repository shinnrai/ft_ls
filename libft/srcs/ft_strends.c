/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strends.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 00:31:12 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/22 00:31:13 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool			ft_strends(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (false);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len < s2_len)
		return (false);
	if (ft_strcmp(&s1[s1_len - s2_len], s2) == 0)
		return (true);
	else
		return (false);
}
