/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 12:25:45 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/07 12:26:52 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*cb;
	size_t			in;

	in = 0;
	ch = (unsigned char)c;
	cb = (unsigned char *)b;
	while (in < len)
	{
		cb[in] = ch;
		in++;
	}
	return (b);
}
