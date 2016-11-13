#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;
	size_t	len2;

	i = ft_strlen(s1);
	j = 0;
	len2 = (size_t)ft_strlen(s2);
	while (j < n && j < len2)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
