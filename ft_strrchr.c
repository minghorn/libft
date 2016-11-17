/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:12:50 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:12:54 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		len;
	int		found;
	char	*match;

	ch = (char)c;
	len = ft_strlen(s);
	i = 0;
	found = 0;
	while (i <= len)
	{
		if (s[i] == ch)
		{
			match = (char *)&s[i];
			found = 1;
		}
		i++;
	}
	if (found)
		return (match);
	return (NULL);
}
