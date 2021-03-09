#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    
    if(*s1 < *s2)
    {
        return (-1);
    } else if(*s1 > *s2)
    {
        return (1);
    } else {
        return (0);
    }
}

int main(void)
{
    int prueba = ft_strcmp("Hola mi nombre es Mario", "Hola mi nombre es Mario");
    printf("%d\n", prueba);
}