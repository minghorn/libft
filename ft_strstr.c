/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:11:03 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 15:09:04 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	matching(char *str, char *to_find, int index)
{
	int		count;

	count = 0;
	if (ft_strlen(str) < ft_strlen(to_find))
		return (0);
	while (str[index] != '\0' && to_find[count] != '\0')
	{
		if (str[index] != to_find[count])
			return (0);
		index++;
		count++;
	}
	if (count != ft_strlen(to_find))
		return (0);
	return (1);
}

char		*ft_strstr(const char *str, const char *to_find)
{
	char	*ptr;
	int		index;
	int		matched;

	ptr = 0;
	index = 0;
	matched = -1;
	while (str[index] != '\0')
	{
		if (str[index] == to_find[0])
		{
			matched = matching((char *)str, (char *)to_find, index);
			if (matched)
			{
				ptr = (char *)&str[index];
				return (ptr);
			}
		}
		index++;
	}
	if (to_find[0] == '\0')
		return ((char *)str);
	return (ptr);
}
