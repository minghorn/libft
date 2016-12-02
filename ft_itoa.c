/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:02:28 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 14:12:26 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		i;
	int		neg;

	len = ft_ctdigits(n);
	neg = -1;
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (num != NULL)
	{
		i = 0;
		if (n < 0)
		{
			if (n != -2147483648)
			{
				num[i] = '-';
				i++;
				n = n * -1;
				neg = 0;
			}
			else
			{
				num = "-2147483648";
				return (num);
			}
		}
		i = len - 1;
		while (i > neg)
		{
			num[i] = ft_itoc(n % 10);
			n = n / 10;
			i--;
		}
		num[len] = '\0';
	}
	return (num);
}
