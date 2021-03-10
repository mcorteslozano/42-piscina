#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	unsigned int offset;
    int dest_len;
	int src_len;

    dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	offset = dest_len;
	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + offset) = *(src + i);
		offset++;
		i++;
		if (offset == size)
			break;
	}
	*(dest + offset) = '\0';
    return (dest_len + src_len + 1);
}

int     main(void)
{
    char dest[10] = "mundo";
    char src[] = "12323456";

    printf("longitud función mía: %d\n", ft_strlcat(dest, src, 6));
	//printf("longitud función original: %lu\n", strlcat(dest, src, 6));
    return (0);
}