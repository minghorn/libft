#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int  main(void)
{
	ft_putnbr(ft_isalpha('B'));
	printf("%d\n", isalpha('B'));
	printf("%d\n", ft_atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf("%d\n", atoi("\t\v\f\r\n \f- \f\t\n\r    06050"));
	printf("%d\n", ft_atoi("+23-4"));
	printf("%d\n", atoi("+23-4"));
	return (0);
}
