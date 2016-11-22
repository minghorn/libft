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
//	printf("%s ", word);
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
	arr = (char **)malloc(sizeof(char *) * (word_count(s, c)));
//	printf("%d\n", word_count(s, c));
	while (s[*i] != '\0' && arr != NULL && i != NULL)
	{
		arr[j] = next_word(i, s, c);
		j++;
	}
//	printf("\n");
	return (arr);
}
