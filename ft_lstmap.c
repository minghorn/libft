/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:23:08 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/20 14:33:08 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;

	if (!lst)
		return (NULL);
	head = malloc(sizeof(t_list));
	current = malloc(sizeof(t_list));
	if (!current || !head)
		return (NULL);
	head = f(lst);
	current = head;
	while (lst->next != NULL)
	{
		current->next = malloc(sizeof(t_list));
		if (!(current->next))
			return (NULL);
		current->next = f(lst->next);
		current->next->next = NULL;
		current = current->next;
		lst = lst->next;
	}
	return (head);
}
