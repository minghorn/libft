/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:06:16 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/07 12:07:18 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	in;
	char	*dstm;
	char	*srcm;

	in = 0;
	dstm = (char *)dst;
	srcm = (char *)src;
	while (in < n)
	{
		dstm[in] = srcm[in];
		in++;
	}
	return (dst);
}
