/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 09:30:25 by mhorn             #+#    #+#             */
/*   Updated: 2017/01/06 15:21:19 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SP(c) (c == '\n'||c == '\t'||c == '\v'||c == '\r'||c == '\f'||c == ' ')
#define ISDIGIT(n) (n >= '0' && n <= '9')
#define ISSIGN(s) (s == '-' || s == '+')
#define INT_MIN -2147483648
#define INT_MAX 2147483647

static long long	make_shorter(const char *str, int *neg, int *sign_ct)
{
	long long		temp;

	temp = 0;
	while (*str != '\0')
	{
		if (*str != '\0' && ISSIGN(*str) && temp == 0)
		{
			if (*sign_ct)
				break ;
			*neg = *str++ == '-';
			*sign_ct += 1;
		}
		else if (ISDIGIT(*str))
			temp = temp * 10 + (*str++ - '0');
		else if (SP(*str) && !*sign_ct && temp == 0)
			str++;
		else if (SP(*str++) && temp != 0)
			break ;
		else
			break ;
	}
	if (*neg)
		temp = temp * -1;
	return (temp);
}

int					ft_atoi(const char *str)
{
	int				neg;
	int				sign_ct;

	neg = 0;
	sign_ct = 0;
	return ((int)make_shorter(str, &neg, &sign_ct));
}
