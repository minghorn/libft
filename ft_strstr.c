/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 13:11:03 by mhorn             #+#    #+#             */
/*   Updated: 2016/08/15 18:00:07 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	matching(char *str, char *to_find, int index)
{
	int count;
	int is_matching;

	count = 0;
	is_matching = -1;
	while (str[index] != '\0' && to_find[count] != '\0')
	{
		if (str[index] != to_find[count])
			return (is_matching);
		index++;
		count++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		index;
	int		matched;

	ptr = 0;
	index = 0;
	matched = -1;
	while (str[index] != '\0')
	{
		if (str[index] == to_find[0])
		{
			matched = matching(str, to_find, index);
			if (matched != -1)
			{
				ptr = &str[index];
				return (ptr);
			}
		}
		index++;
	}
	if (to_find[0] == '\0')
		return (str);
	return (ptr);
}
