/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:13:12 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 15:03:53 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;

	j = ft_strlen(dst);
	i = 0;
	//printf("\nstrlen: %d size: %zu\n", j, size);
	while (i < (size - j - 1) && size != 0 && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (size != 0)
		dst[j] = '\0';
	return (j);
}
