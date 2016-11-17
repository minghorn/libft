/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:21:04 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:21:05 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define WSP(c) (c == ' ' || c == '\t' || c == '\n')

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		beg;
	int		end;
	int		i;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str != NULL)
	{
		//printf("%s\n", "malloc worked");
		beg = 0;
		end = ft_strlen(s) - 1;
		//printf("%d\n", end);
		while (s[beg] != '\0' && WSP(s[beg]))
			beg++;
		while (end > -1 && WSP(s[end]))
			end--;
		//printf("beginning: %d end: %d\n", beg, end);
		i = 0;
		while (beg <= end)
		{
			str[i] = s[beg];
			beg++;
			i++;
		}
		str[beg] = '\0';
		//printf("%s\n", str);
		return (str);
	}
	return ((char *)s);
}
