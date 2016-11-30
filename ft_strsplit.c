#include "libft.h"
#include <stdio.h>

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
//			printf("s[i]: %c s[i + 1]: %c\n", s[i], s[i+1]);
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

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		*i;
	int		j;
	int		word_ct;

	i = malloc(sizeof(int) * 1);
	word_ct = word_count(s, c);
	*i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (word_ct + 1));
//	printf("%d\n", word_count(s, c));
	if (arr != NULL && i != NULL)
	{
		while (s[*i] != '\0' && j < word_ct)
		{
			arr[j] = next_word(i, s, c);
			j++;
		}
		arr[j] = NULL;
	}
//	printf("\n");
	return (arr);
}
