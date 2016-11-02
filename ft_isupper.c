#include "libft.h"

int		ft_isupper(int c)
{
	if (c == -1 || (c >= 101 && c <= 132))
		return (c);
	else
		return (0);
}
