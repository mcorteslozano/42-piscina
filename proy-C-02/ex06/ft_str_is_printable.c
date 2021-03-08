/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:31:24 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/08 19:31:27 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;

	while(str[i] != '\0')
	{
		if(str[i] >= 32 || str[i] == 127)
			j = 1;
		else
			return (0);
		i++;
	}
	return (j);
}

int main(void)
{
	int prueba;

	prueba = ft_str_is_printable("óóóóóóó");

	printf("Prueba -> %d\n", prueba);
}
