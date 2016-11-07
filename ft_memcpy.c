#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t in;
	char *dstm;
	char *srcm;

	in = 0;
	dstm = (char *)dst;
	srcm = (char *)src;
	while (in < n)
	{
		dstm[in] = srcm[in];
		in++;
	}
	return (dst);
}
