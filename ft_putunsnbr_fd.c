#include <unistd.h>

int	ft_putunsnbr_fd(unsigned int n, int fd)
{
	long	nl;
	int		i;
	char	str[10];
	int	c;

	i = 0;
	nl = n;
	c = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return (2);
	}
	while (nl > 0)
	{
		str[i++] = (nl % 10) + 48;
		nl /= 10;
		c++;
	}
	while (i-- > 0)
		write(fd, &str[i], 1);
	return (c);
}
