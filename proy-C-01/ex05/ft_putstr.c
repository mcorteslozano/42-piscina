/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 20:02:32 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/04 17:59:31 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	char i;

	i = 0;
	while(str[i] != '\0') 
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(){
	char linea[] = "Hello World!";

	ft_putstr(linea);
}
