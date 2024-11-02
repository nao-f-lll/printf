#include <unistd.h>

int	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
	{
		int	c;
		c = 0;
		while (s && *s)
		{	
			write(fd, s++, 1);
			c++;
		}
		return c;
	}
	else
		ft_putstr_fd("(null)", 1);
}

