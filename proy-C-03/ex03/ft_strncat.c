#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int j;

    i = 0;
    j = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(j <= nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char destino[] = "Probando... ";
    char origen[] = "0123456789";

    printf("%s\n", ft_strncat(destino, origen, 2));

}