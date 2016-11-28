/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:11:35 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/07 13:09:21 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dstm;
	unsigned char	*srcm;
	unsigned char	ch;
	size_t			in;

	ch = (unsigned char)c;
	dstm = (unsigned char *)dst;
	srcm = (unsigned char *)src;
	in = 0;
	while (in < n)
	{
		dstm[in] = srcm[in];
		if (srcm[in] == ch)
			return (&dstm[(in + 1)]);
		in++;
	}
	return ((unsigned char *)NULL);
}
