/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:17:08 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:17:37 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*st;
	size_t			i;

	ch = (unsigned char)c;
	st = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == ch)
			return (&st[i]);
		i++;
	}
	return ((void *)NULL);
}
