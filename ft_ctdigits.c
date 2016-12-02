#include "libft.h"

int		ft_ctdigits(int n)
{
	int		neg;
	int		digits;

	neg = 0;
	digits = 0;
	if (n < 0)
	{
		neg = 1;
		if (n != -2147483648)
			n = n * -1;
		else
			return (11);
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		digits++;
		n = n / 10;
	}
	return (digits + neg);
}
