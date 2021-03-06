/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 11:48:08 by ofedorov          #+#    #+#             */
/*   Updated: 2016/09/28 11:54:09 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node_to_del;

	if (!alst || !(*alst))
		return ;
	while (*alst)
	{
		node_to_del = *alst;
		*alst = (*alst)->next;
		ft_lstdelone(&node_to_del, del);
	}
	*alst = NULL;
}
