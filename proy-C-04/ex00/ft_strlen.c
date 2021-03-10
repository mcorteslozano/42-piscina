#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return (i);
}

int main(void)
{
    int prueba = ft_strlen("hola mi nombre es mario");
    printf("%d\n", prueba);
}