/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 20:14:29 by mhorn             #+#    #+#             */
/*   Updated: 2016/08/16 20:14:33 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*create_array(int size, char *str)
{
	char	arr[size + 1];
	int		in;

	in = 0;
	while (str[in] != '\0')
	{
		if (str[in] >= 65 && str[in] <= 90)
			arr[in] = str[in] + 32;
		else
			arr[in] = str[in];
		in++;
	}
	arr[in] = '\0';
	str = arr;
	return (str);
}

char	*ft_tolower(char *str)
{
	int in;

	in = 0;
	while (str[in] != '\0')
	{
		in++;
	}
	return (create_array(in, str));
}
