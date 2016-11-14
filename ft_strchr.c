#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;
	int		len;
	char	*match;

	ch = (char)c;
	len = ft_strlen(s);
	i = 0;
	while (i <= len)
	{
		if (s[i] == ch)
		{
			match = (char *)&s[i];
			return (match); 
		}
		i++;
	}
	return (NULL);
}