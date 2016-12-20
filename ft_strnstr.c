/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:19:29 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/07 16:21:28 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	match(const char *big, const char *little, size_t len, size_t i)
{
	int	j;

	j = 0;
	while (big[i] != '\0' && little[j] != '\0')
	{
		if (big[i] != little[j] || i == len)
			return (0);
		i++;
		j++;
	}
	if (j < ft_strlen(little))
		return (0);
	return (1);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*ptr;

	ptr = 0;
	i = 0;
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0])
		{
			if (match(big, little, len, i))
			{
				ptr = (char *)&big[i];
				return (ptr);
			}
		}
		i++;
	}
	if (little[0] == '\0')
		return ((char *)big);
	return (NULL);
}
