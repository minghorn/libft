/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:27:16 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/27 12:51:25 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Check in which direction to copy in, if srcm < dstm copy right to left
** if srcm > dstm copy left to right otherwise they are equal and do not copy
*/

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstm;
	unsigned char	*srcm;

	dstm = (unsigned char *)dst;
	srcm = (unsigned char *)src;
	if (len)
	{
		i = len;
		if (dst < src)
			return (ft_memcpy(dst, src, len));
		while (i--)
			dstm[i] = srcm[i];
		return ((void *)dstm);
	}
	return (dst);
}
