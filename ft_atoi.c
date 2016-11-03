/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 09:30:25 by mhorn             #+#    #+#             */
/*   Updated: 2016/08/23 18:31:28 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_ok(char c, int str_num, int *ok_ptr)
{
	int count;

	count = 0;
	if (str_num > 0)
		return (1);
	if (c == '\n' || c == '\t' || c == '\v' || c == '\r' || c == '\f')
		return (0);
	if ((c == '-' || c == '+') && *ok_ptr == 0)
	{
		*ok_ptr += 1;
		return (0);
	}
	if (c == ' ')
		return (0);
	return (1);
}

int			ft_atoi(char *str)
{
	int str_num;
	int index;
	int is_neg;
	int ok;
	int *ok_ptr;

	str_num = 0;
	ok = 0;
	ok_ptr = &ok;
	index = 0;
	is_neg = 1;
	while (str[index] != '\0')
	{
		if (!(str[index] < '0') && !(str[index] > '9'))
			str_num = str_num * 10 + (str[index] - '0');
		else if (is_ok(str[index], str_num, ok_ptr) != 0)
			return (str_num * is_neg);
		else if (str[index] == '-')
			is_neg = -1;
		index++;
	}
	return (str_num * is_neg);
}
