#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		i;

	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	if (fresh != NULL)
	{
		while (s[i] != '\0')
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[i] = '\0';
	}
	return (fresh);
}
