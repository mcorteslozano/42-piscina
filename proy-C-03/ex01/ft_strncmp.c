#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i;

    i = 0;
    while(i <= n)
    {
        if(*s1 > *s2)
        {
            return (1);
        } else if(*s1 < *s2)
        {
            return (-1);
        } else {
            return (0);
        }
        i++;
    }

    return (0);
}

int main(void)
{
    int prueba = ft_strncmp("Hola mi nombre es Mario", "hola mi nombre es Mario", 5);
    printf("%d\n", prueba);
}