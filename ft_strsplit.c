#include "libft.h"

static char	*next_word(int *i, char const *s, char c)
{
	char	*word;
	int		j;

	word = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (word != NULL)
	{
		j = 0;
		while (s[*i] != c && s[*i] != '\0')
		{
			word[j] = s[*i];
			*i = *i + 1;
			j++;
		}
		word[j] = '\0';
		while (s[*i] == c && s[*i] != '\0')
			*i = *i + 1;
	}
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		*i;
	int		j;

	i = malloc(sizeof(int) * 1);
	*i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	while (s[*i] != '\0')
	{
		arr[j] = next_word(i, s, c);
		j++;
	}
	return (arr);
}
