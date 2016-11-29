/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:27:16 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:16:31 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	int		 i;

	if (d > 0)
	{
		i = 0;
		while (i < (int)len)
		{
			dstm[i] = srcm[i];
			i++;
		}
		dstm[i] = '\0';
	}
	else if (d < 0)
	{
		i = (int)len - 1;
		dstm[i + 1] = '\0';
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
	cpy_s(dstm, srcm, len, overlapping(dstm, srcm));
	return (dst);
}
