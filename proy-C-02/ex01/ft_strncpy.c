/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:29:49 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/08 19:29:51 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

int main(void)
{
	char array[15];

	printf("%s", ft_strncpy(array, "Prueba strncpy", 15));
}

