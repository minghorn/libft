#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		len;
	int		found;
	char	*match;

	ch = (char)c;
	len = ft_strlen(s);
	i = 0;
	found = 0;
	while (i <= len)
	{
		if (s[i] == ch)
		{
			match = (char *)&s[i];
			found = 1;
		}
		i++;
	}
	if (found)
		return (match);
	return (NULL);
}
