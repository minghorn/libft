#include "libft.h"

char	ft_itoc(int n)
{
	char    i;
	
	i = '0';
	while (i != n + '0')
		i++;
	return (i);
}
