#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t in;
	char *sz;

	in = 0;
	sz = (char *)s;
	while (in < n)
	{
		sz[in] = 0;
		in++;
	}
}
