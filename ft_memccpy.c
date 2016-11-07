#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dstm;
	unsigned char *srcm;
	unsigned char ch;
	size_t in;

	ch = (unsigned char)c;
	dstm = (unsigned char *)dst;
	srcm = (unsigned char *)src;
	in = 0;
	while (in < n)
	{
		if (srcm[in] == ch)
			return (&dstm[in]);
		dstm[in] = srcm[in];
		in++;
	}
	return ((unsigned char *) NULL);
}
