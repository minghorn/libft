#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		len;

	ch = (char)c;
	len = ft_strlen(s) + 1;
	i = 0;
	while (i <= len)
	{
		if (s[i] == ch)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
