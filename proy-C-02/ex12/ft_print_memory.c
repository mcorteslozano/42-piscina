#include <unistd.h>
#include <stdio.h>

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
/*
void	ft_print_addr(void *addr)
{
	int i;
	char addr_[15];
}
*/

void	*ft_print_memory(void *addr, unsigned int size)
{
	int x;
	char	*str;

//	*str = &addr;
	x = 0;
	if (size != 0)
	{
		while (x < size)
		{
			ft_print_hex(str[x]);
			x++;
		}
		printf("%x\n", addr);
	}
}

int 	main(void)
{
	ft_print_memory("Bonjour les amin\nches... c est fo\nu.tout.ce qu on\n", 9);
}