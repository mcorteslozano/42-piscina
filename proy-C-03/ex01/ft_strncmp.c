/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:08:25 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/10 18:08:28 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    while(n > 0)
    {
        if(*s1 != *s2)
            return (*s1 - *s2);
        if(*s1 == 0)
            return (0);
        s1++;
        s2++;
        n--;
    }
    return (0);
}

int main(void)
{
    char v1[] = "Hola mi nombre es Mario";
    char v2[] = "hola mi nombre es Mario";

    int prueba = ft_strncmp("Hola mi nombre es Mario", "Hola mi nombre es Mario", 6);
    printf("%d\n", prueba); // 0

    int prueba2 = ft_strncmp("hola mi nombre es Mario", "Hola mi nombre es Mario", 6);
    printf("%d\n", prueba2); // 32

    int prueba3 = ft_strncmp("Hola mi nombre es Mario", "hola mi nombre es Mario", 6);
    printf("%d\n", prueba3); // -32

    int prueba4 = strncmp(v1, v2, 6);
    printf("%d\n", prueba4); // -32

}
