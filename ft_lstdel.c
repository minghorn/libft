/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 15:32:31 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/07 15:44:49 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	while ((*alst)->next != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		(*alst) = (*alst)->next;
	}
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	(*alst) = NULL;
}
