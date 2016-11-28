#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;
	int		i;

	nbr = ft_itoa(n);
	i = 0;
	while (nbr[i] != '\0')
	{
		write(fd, &nbr[i], 1);
		i++;
	}
}
