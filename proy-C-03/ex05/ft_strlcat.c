/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:09:09 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/10 18:09:12 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	unsigned int offset;
    unsigned int dest_len;
	unsigned int src_len;

    dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	offset = dest_len;
	if (src_len == 0 && size == 0)
		return (0);
	else if(offset > size - 1)
		return (size);
	while((*src != '\0') && (offset < size - 1) && (size != 0))
	{
		*(dest + offset) = *src;
		offset++;
		src++;
	}
	*(dest + offset) = '\0';
	return (dest_len + src_len);
}

int     main(void)
{
    char dest[10] = "mundo";
    char src[] = "123456";

    printf("longitud función original: %lu\n", strlcat(dest, src, 8));
	printf("%s\n", dest);
	return (0);
}
