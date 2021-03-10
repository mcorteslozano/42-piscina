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
