/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhorn <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:39:04 by mhorn             #+#    #+#             */
/*   Updated: 2016/11/30 16:11:58 by mhorn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
		{
			count++;
		}
		i++;
	}
	return (count);
}

static char	*next_word(int *i, char const *s, char c)
{
	int		j;

	while (s[*i] == c && s[*i] != '\0')
		*i = *i + 1;
	j = *i;
	while (s[*i] != c && s[*i] != '\0')
		*i = *i + 1;
	return (ft_strsub(s, (unsigned int)j, (size_t)(*i - j)));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		*i;
	int		j;
	int		word_ct;

	if (s)
	{
		i = malloc(sizeof(int) * 1);
		word_ct = word_count(s, c);
		*i = 0;
		j = 0;
		arr = (char **)malloc(sizeof(char *) * (word_ct + 1));
		if (arr != NULL)
		{
			while (s[*i] != '\0' && j < word_ct)
			{
				arr[j] = next_word(i, s, c);
				j++;
			}
			arr[j] = NULL;
		}
		return (arr);
	}
	return (NULL);
}
