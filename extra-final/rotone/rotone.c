/* 

ROTONE:Recibir por argumento una frase y retornar el próximo carácter ASCII 
de cada uno de los caracteres. Solo cambian las letras. Si hay Z o z, cambiará a A o a.

*/

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rotone(char *s)
{
    while (*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1);
		else if (*s == 'Z' || *s == 'z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s);
		++s;
	}
}

int main(int argc, char **argv)
{
    if(argc == 2)
        rotone(argv[1]);
    ft_putchar('\n');
    return(0);
}