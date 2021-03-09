#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void getHexadecimal(int x)
{
	int a;
	int b;
	char *hexa;
	
	hexa = "0123456789abcdf";
	a = hexa[x/16];
	b = hexa[x%16];
	ft_putchar('\\');
	ft_putchar(a);
	ft_putchar(b);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] < 32 || str[i] == 127)
		{
			getHexadecimal(str[i]);
		} else {
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
