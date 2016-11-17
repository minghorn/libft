#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	i;

	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (fresh != NULL)
	{
		while (s[i] != '\0')
		{
			fresh[i] = f(i, s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
