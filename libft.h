/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 12:02:16 by mhorn             #+#    #+#             */
/*   Updated: 2016/10/31 12:02:18 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
	#define LIBFT_H
	#include <unistd.h>
	#include <stdlib.h>
	#include <string.h>

	int		ft_isupper(int c);
	int		ft_islower(int c);
	int		ft_isalpha(int c);
	void	ft_putnbr(int n);
	void	ft_putchar(char c);
	void	ft_putstr(char *str);
	int		ft_strcmp(const char *s1, const char *s2);
	int		ft_strncmp(const char *s1, const char *s2, size_t n);
	int		ft_atoi(char *str);
#endif
