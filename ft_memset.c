#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	unsigned char ch;
	unsigned char *cb;
	size_t in;

	in = 0;
	ch = (unsigned char) c;
	cb = (unsigned char *)b;
	while (in < len)
	{
		cb[in] = ch;
		in++;
	}
	return (b);
}
