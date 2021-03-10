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

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int res;

    i = 0;
    while(dest[i] != '\0')
    {
        i++;
    }
    res = 0;
    while(src[res] != '\0')
    {
        ++res;
    }
    if(size <= i)
    {
        res += size;
    } 
    else
    {
        
    }


}

int main(void)
{

}
