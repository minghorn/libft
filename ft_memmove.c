/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:27:16 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 15:06:32 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Check in which direction to copy in, if srcm < dstm copy right to left
** if srcm > dstm copy left to right otherwise they are equal and do not copy
*/
static void	*cpy_s(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*dstm;
	unsigned char	*srcm;

	dstm = (unsigned char *)dst;
	srcm = (unsigned char *)src;
	i = (int)len - 1;
	dstm[(int)len] = '\0';
	while (i > -1)
	{
		dstm[i] = srcm[i];
		i--;
	}
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len)
	{
		if (dst > src && dst <= src + len)
			return (cpy_s(dst, src, len));
		else
			return (ft_memcpy(dst, src, len));
	}
	return (dst);
}
