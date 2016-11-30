/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:21:04 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:43:10 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define WSP(c) (c == ' ' || c == '\t' || c == '\n')

static int	*find_indices(char const *s)
{
	int	*indices;
	int	i;

	i = 0;
	indices = (int *)malloc(sizeof(int) * 2);
	if (indices != NULL)
	{
		while (WSP(s[i]) && s[i] != '\0')
			i++;
		if (s[i] == '\0')
		{
			indices[0] = 0;
			indices[1] = 0;
			return (indices);
		}
		else
			indices[0] = i;
		i = ft_strlen(s) - 1;
		while (WSP(s[i]) && i > 0)
			i--;
		indices[1] = i;
	}
	return (indices);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		*ind;
	int		i;
	int		j;

	ind = find_indices(s);
	str = (char *)malloc(sizeof(char) * ((ind[1] - ind[0]) + 2));
	if (str != NULL)
	{
		i = 0;
		j = ind[0];
		while (j <= ind[1] && ind[0] != ind[1])
		{
			str[i] = s[j];
			j++;
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	else if (str == NULL)
		return (str);
	return ((char *)s);
}
