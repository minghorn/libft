#include "libft.h"

static void print_num(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
		ft_putchar('0');
	while (n > 0)
	{
		ft_putchar((n % 10 + '0'));
		n = n / 10;
	}
	ft_putchar('\n');
}

void ft_putnum(int n)
{
	int neg = 1;
	int num = 0;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		neg = -1;
		n = n * -1;
	}
	while (n > 0)
	{
		num = (num * 10) + (n % 10);
		n = n / 10;
	}
	print_num(num * neg);
}
