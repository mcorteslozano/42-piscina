/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:08:36 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/10 18:08:38 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
    {
        dest[j] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char prueba[20] = "probando";
    char prueba1[10] = "ft_strcat";

    printf("%s\n", ft_strcat(prueba, prueba1));
}
