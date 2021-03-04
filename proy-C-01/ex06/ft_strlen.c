/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:06:55 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/04 18:00:10 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		//printf("%d", i);
		i++;
	}
	return i;
}

int main(){
	char linea[] = "Hello World!";
	int total;

	total = ft_strlen(linea);
	printf("%d", total);
}
