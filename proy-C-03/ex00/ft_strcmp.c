/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 18:08:12 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/10 18:08:16 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
    {
        s1++;
        s2++;   
    }
    if(*s1 == *s2)
        return (0);
    if((*s1 - *s2) < 0)
        return (-1);
    if((*s1 - *s2) < 0)
        return (1);
    return (0);
}

int main(void)
{
    int prueba = ft_strcmp("Hola mi nombre es Mario", "Hola mi nombre es Mario");
    printf("%d\n", prueba); // 0

    int prueba2 = ft_strcmp("hola mi nombre es Mario", "Hola mi nombre es Mario");
    printf("%d\n", prueba2); // 1

    int prueba3 = ft_strcmp("Hola mi nombre es Mario", "hola mi nombre es Mario");
    printf("%d\n", prueba3); // -1
}
