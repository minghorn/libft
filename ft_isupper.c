#include "libft.h"

int		ft_isupper(int c)
{
	unsigned char ch;
	
	ch = (unsigned char) c;
	if (ch == '\0' || (ch >= 65 && ch <= 90))
		return (1);
	
	else
		return (0);
}
