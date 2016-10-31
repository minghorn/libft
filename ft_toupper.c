/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:57:20 by mhorn             #+#    #+#             */
/*   Updated: 2016/10/31 14:19:24 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*create_array(int size, char *str)
{
	char	arr[size + 1];
	int		in;

	in = 0;
	while (str[in] != '\0')
	{
		if (str[in] >= 97 && str[in] <= 122)
			arr[in] = str[in] - 32;
		else
			arr[in] = str[in];
		in++;
	}
	arr[in] = '\0';
	str = arr;
	return (str);
}

int		ft_toupper(int l)
{
	
	return (create_array(in, str));
}
