#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		i;

	fresh = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (fresh != NULL)
	{
		while (start < (unsigned int)len)
		{
			fresh[i] = s[start];
			start++;
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
