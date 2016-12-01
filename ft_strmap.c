/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:18:55 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 16:12:53 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	if (s)
	{
		fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		i = 0;
		if (fresh != NULL)
		{
			while (s[i] != '\0')
			{
				fresh[i] = f(s[i]);
				i++;
			}
			fresh[i] = '\0';
		}
		return (fresh);
	}
	return (NULL);
}
