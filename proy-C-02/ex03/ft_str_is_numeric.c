/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:31:01 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/08 19:31:03 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
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

	prueba = ft_str_is_numeric("131sdadasaa23");

	printf("Prueba -> %d\n", prueba);
}
