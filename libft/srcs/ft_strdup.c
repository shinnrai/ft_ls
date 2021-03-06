/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 13:21:43 by ofedorov          #+#    #+#             */
/*   Updated: 2016/09/22 13:44:11 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	if (!s)
		return (NULL);
	copy = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while ((copy[i] = s[i]) != 0)
		i++;
	return (copy);
}
