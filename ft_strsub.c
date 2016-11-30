/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:19:43 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:19:44 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		i;

	fresh = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (fresh != NULL)
	{
		while (i < (int)len)
		{
			fresh[i] = s[start];
			start++;
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
