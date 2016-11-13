#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		j;

	j = ft_strlen(dst);
	i = 0;
	while (i < size && size != 0 && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (size != 0)
		dst[j] = '\0';
	return (j);
}
