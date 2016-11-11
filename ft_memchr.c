#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*st;
	size_t			i;

	ch = (unsigned char)c;
	st = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (st[i] == ch)
			return (&st[i]);
		i++;
	}


	return ((void *)NULL);
}
