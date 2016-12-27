/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:02:28 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/20 14:45:12 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		make_char(char *num, int n, int len)
{
	int		i;
	int		neg;

	i = 0;
	neg = -1;
	if (n < 0)
	{
		num[i++] = '-';
		n = n * -1;
		neg = 0;
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

char			*ft_itoa(int n)
{
	char	*num;
	int		len;

	len = ft_ctdigits(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (num != NULL)
	{
		if (n != -2147483648)
			make_char(num, n, len);
		else
			return (ft_strdup("-2147483648"));
	}
	return (num);
}
