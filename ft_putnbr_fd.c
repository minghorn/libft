/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 14:34:12 by mhorn             #+#    #+#             */
/*   Updated: 2016/12/20 14:48:58 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_num(int n[12], int fd, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		ft_putchar_fd(n[i] + '0', fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		neg;
	int		num[12];
	int		len;
	int		i;

	neg = 0;
	len = ft_ctdigits(n);
	if (n == -2147483648)
		write(fd, "-2147483648", 12);
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
	print_num(num, fd, len);
}
