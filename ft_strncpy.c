#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		ter;

	i = 0;
	ter = 0;
	while (i < len)
	{
		if (src[i] != '\0' && !ter)
			dst[i] = src[i];
		else if (src[i] == '\0')
			ter = 1;
		if (ter)
			dst[i] = '\0';
		i++;
	}
	return (dst);
}
