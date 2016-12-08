/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:23:08 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/07 17:09:50 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	new = (t_list *)malloc(sizeof(t_list));
	if (new != NULL)
	{
		new = f(lst);
		while (lst->next != NULL)
		{
			lst = lst->next;
			new->next = (t_list *)malloc(sizeof(t_list));
			if (new->next != NULL)
				new->next = f(lst);
		}
		new->next = NULL;
	}
	return (new);
}
