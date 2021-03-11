/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:08:47 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/10 18:08:49 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    while(j < nb && src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char destino[] = "Hola";
    char origen[] = "1234";

    printf("%s\n", ft_strncat(destino, origen, 3));

}
