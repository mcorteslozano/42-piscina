#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char prueba[10];

    printf("%s\n", ft_strcat(prueba, "abc"));
}