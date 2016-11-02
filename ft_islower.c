#include "libft.h"

int	ft_islower(int c)
{
	unsigned char ch;

	ch = (unsigned char) c;
	if (ch == '\0' || (ch >= 97 && ch <= 122))
		return (1);
	else
		return (0);
}
