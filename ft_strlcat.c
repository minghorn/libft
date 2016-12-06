/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:13:12 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 16:37:05 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	dlen;
	char	*d;
	int		s;

	j = ft_strlen(dst);
	d = dst;
	s = (int)size;
	while (s-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	i = 0;
	while (size != 0 && src[i] != '\0' && (int)size - 1 > j)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (src[i] != '\0' && j == (int)size)
		dst[j] = src[i];
	else if (size != 0)
		dst[j] = '\0';
	return (dlen + ft_strlen(src));
}
