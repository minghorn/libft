/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:27:16 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 15:02:36 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** Check in which direction to copy in, if srcm < dstm copy right to left
** if srcm > dstm copy left to right otherwise they are equal and do not copy
*/

static int	overlapping(unsigned char *dstm, unsigned char *srcm)
{
	if (srcm < dstm)
		return (-1);
	else if (srcm > dstm)
		return (1);
	return (0);
}

static void	cpy_s(unsigned char *dstm, unsigned char *srcm, size_t len, int d)
{
	int		i;

	if (d > 0)
		ft_memcpy(dstm, srcm, len);
	else if (d < 0)
	{
		i = (int)len - 1;
		dstm[(int)len] = '\0';
		while (i > -1)
		{
			dstm[i] = srcm[i];
			i--;
		}
	}
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstm;
	unsigned char	*srcm;

	dstm = (unsigned char *)dst;
	srcm = (unsigned char *)src;
	if (len)
		cpy_s(dstm, srcm, len, overlapping(dstm, srcm));
	return (dst);
}
