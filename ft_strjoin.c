#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	int i;
	int j;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (new != NULL)
	{
		j = -1;
		i = -1;
		while (s1[++i] != '\0')
			new[++j] = s1[i];
		i = -1;
		while (s2[++i] != '\0')
			new[++j] = s2[i];
		new[++j] = '\0';
	}
	return (new);
}
