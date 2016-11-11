/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:27:16 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/07 13:32:19 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t i;

	if (d > 0)
	{
		i = 0;
		while (i < len)
		{
			dstm[i] = srcm[i];
			i++;
		}
	}
	else if (d < 0)
	{
		i = len;
		while (i > 0)
		{
			dstm[i] = srcm[i];
			i--;
		}
	}

}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstm;
	unsigned char	*srcm;

	dstm = (unsigned char *)dst;
	srcm = (unsigned char *)src;
	cpy_s(dstm, srcm, len, overlapping(dstm, srcm));
	return (dst);
}
