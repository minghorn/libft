#include "libft.h"

int	ft_islower(int c)
{
	if (c == -1 || (c >= 141 && c <= 172))
		return (c);
	else
		return (0);
}
