#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
