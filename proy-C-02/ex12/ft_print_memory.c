#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_hex(int x)
{
    int     a;
    int     b;
    char    *hex;

	hex = "0123456789abcdf";
    a = hex[x / 16];
    b = hex[x % 16];
    ft_putchar('\\');
    ft_putchar(a);
    ft_putchar(b);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int x;
	char	*str;

	x = 0;
	if (size != 0)
	{
		while (x < size)
		{
			ft_print_hex(str[x]);
			x++;
		}
	}
}