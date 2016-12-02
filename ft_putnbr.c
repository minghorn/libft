/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 09:20:41 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/17 13:16:59 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_num(int n[12])
{
	int		i;

	i = 0;
	while (n[i] != '\0')
	{
		ft_putchar(n[i] + '0');
		i++;
	}
    ft_putchar('\n');
}

void		ft_putnbr(int n)
{
    int		neg;
    int 	num[12];
    int		len;
    int		i;
    
	neg = 0;
	len = ft_ctdigits(n);
    if (n == -2147483648)
		write(1, "-2147483648", 12);
    else if (n < 0)
    {
        neg = 1;
        n = n * -1;
    }
	i = len - 1;
	num[len] = '\0';
    while (i > 0)
    {
        num[i] = n % 10;
        n = n / 10;
		i--;
    }
	if (neg)
		num[0] = '-';
	else
		num[0] = n;
    print_num(num);
}
