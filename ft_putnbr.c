#include "libft.h"

static int	nbr_len(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

void ft_putnbr(int n)
{
	int len;
	char *arr;
	int in;

	in = 0;
	len = nbr_len(n);
	if (n < 0)
	{
		arr[in] = '-';
		n = n * -1;
		in++;
	}
	while (n > 0)
	{
		arr[in] = n % 10;
		n = n / 10;
	}
	ft_putstr(arr);
}
