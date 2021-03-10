#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if(*to_find == '\0')
    {
        return (str);
    }
    while(str[i] != '\0')
    {
        j = 0;
        while(to_find[j] == str[i + j])
        {
            if(to_find[j + 1] == '\0')
            {
                return (str + i);
            }
            j++;
        }
        i++;
    }
    return (0);
}

int main(void)
{
	char	*string = "Hola mi nombre es Mario";
	char	*search = "Mario";
	//printf("%s\n", ft_strstr(string, search));
	printf("%s\n", strstr(string, search));
}