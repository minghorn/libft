#include "libft.h"

int	ft_isascii(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 0 && ch <= 177)
		return (1);
	return (0);
}
