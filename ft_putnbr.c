/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 09:20:41 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/07 12:15:07 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_num(char *n, int index)
{
	while (index > -1)
	{
		ft_putchar(n[index]);
		index--;
	}
}

char	*clear_array(char *num)
{
	int i;

	i = 0;
	while (i < 11)
	{
		num[i] = '\0';
		i++;
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	char	num[11];
	int		index;
	int		is_neg;

	index = 0;
	is_neg = 1;
	clear_array(num);
	if (nb < 0)
		is_neg = -1;
	while (nb != 0)
	{
		num[index] = (nb % 10) * is_neg + '0';
		nb = nb / 10;
		index++;
	}
	if (is_neg == -1)
		num[index] = '-';
	print_num(num, index);
}
