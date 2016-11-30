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

static char		char_int(int n)
{
	char	i;

	i = '0';
	while (i != n + '0')
		i++;
	return (i);
}

static int		num_digits(int n)
{
	int		neg;
	int		digits;

	neg = 0;
	digits = 0;
	if (n < 0)
	{
		neg = 1;
		if (n != -2147483648)
			n = n * -1;
		else
			return (11);
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits + neg);
}

char			*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		i;
	int		neg;

	len = num_digits(n);
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
			num[i] = char_int(n % 10);
			n = n / 10;
			i--;
		}
		num[len] = '\0';
	}
	return (num);
}
