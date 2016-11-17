/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:24:03 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:24:59 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		len;
	char	*match;

	ch = (char)c;
	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == ch)
		{
			match = (char *)&s[i];
			return (match);
		}
		i++;
	}
	return (NULL);
}
