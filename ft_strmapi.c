/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 13:23:45 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:23:53 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (fresh != NULL)
	{
		while (s[i] != '\0')
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
