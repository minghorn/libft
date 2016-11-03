/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 21:32:46 by mhorn             #+#    #+#             */
/*   Updated: 2016/08/16 10:17:09 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int in;

	in = 0;
	while (in < n)
	{
		if (s1[in] == '\0' || s2[in] == '\0')
			return ((unsigned char)s1[in] - (unsigned char)s2[in]);
		else if (s1[in] != s2[in])
			return ((unsigned char)s1[in] - (unsigned char)s2[in]);
		in++;
	}
	return (0);
}
