/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 09:30:25 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/27 12:05:28 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SP(c) (c == '\n'||c == '\t'||c == '\v'||c == '\r'||c == '\f'||c == ' ')
#define ISDIGIT(n) (n >= '0' && n <= '9')
#define ISSIGN(s) (s == '-' || s == '+')
#define INT_MIN -2147483648
#define INT_MAX 2147483647

int				ft_atoi(const char *str)
{
	long long	temp;
	int			neg;
	int			sign_ct;

	neg = 0;
	sign_ct = 0;
	temp = 0;
	while (*str != '\0')
	{
		if (*str != '\0' && ISSIGN(*str) && temp == 0)
		{
			if (sign_ct)
				break ;
			neg = *str++ == '-';
			sign_ct++;
		}
		else if (ISDIGIT(*str))
			temp = temp * 10 + (*str++ - '0');
		else if (SP(*str) && !sign_ct && temp == 0)
			str++;
		else if (SP(*str++) && temp != 0)
			break ;
		else
			break ;
	}
	if (neg)
		temp = temp * -1;
	return ((int)temp);
}
