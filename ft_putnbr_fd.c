/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:11:17 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 14:11:21 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;
	int		i;

	nbr = ft_itoa(n);
	i = 0;
	while (nbr[i] != '\0')
	{
		write(fd, &nbr[i], 1);
		i++;
	}
}
