/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 09:30:25 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/20 16:45:38 by mhorn            ###   ########.fr       */
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

	neg = 0;
	temp = 0;
	while (*str != '\0')
	{
		if (*str != '\0' && ISSIGN(*str) && temp == 0)
			neg = *str++ == '-';
		else if (ISDIGIT(*str))
			temp = temp * 10 + (*str++ - '0');
		else if (SP(*str++) && temp != 0)
			break;
		else
			break;
	}
	if (temp >= INT_MIN && temp <= INT_MAX)
		return (temp * neg);
	return (-1);
}
/* int			ft_atoi(const char *str)
{
	int str_num;
	int index;
	int is_neg;
	int	sign_ct;

	str_num = 0;
	index = -1;
	is_neg = 1;
	sign_ct = 0;
	while (str[++index] != '\0')
	{
		if (ISDIGIT(str[index]))
			str_num = str_num * 10 + (str[index] - '0');
		else if (str[index] == '-' && sign_ct == 0 && str_num == 0)
			is_neg = -1;
		else if (ISSIGN(str[index]) && sign_ct != 0)
			return (str_num * is_neg);
		else if (SP(str[index]) && str_num != 0)
			return (str_num * is_neg);
		else if (!SP(str[index]) && !(ISSIGN(str[index])))
			return (str_num * is_neg);
		if (ISSIGN(str[index]) && (!(ISDIGIT(str[index + 1])) || str_num != 0))
			return (str_num * is_neg);
		else if (ISSIGN(str[index]))
			sign_ct++;
	}
	return (str_num * is_neg);
} */
