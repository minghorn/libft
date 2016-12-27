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

void		ft_putnbr_fd(int n, int fd)
{
	int		neg;
	char	num[24];
	int		len;
	int		i;

	neg = -1;
	ft_bzero(num, 24);
	len = ft_ctdigits(n);
	if (n == -2147483648)
		write(fd, "-2147483648", 12);
	else if (n < 0)
	{
		neg = 0;
		n = n * -1;
		num[0] = '-';
	}
	i = len - 1;
	while (i > neg)
	{
		num[i--] = ft_itoc(n % 10);
		n = n / 10;
	}
	ft_putstr_fd(num, fd);
}
