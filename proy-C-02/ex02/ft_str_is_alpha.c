/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:30:03 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/08 19:30:06 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			j = 1;
		else if(str[i] >= 'a' && str[i] <= 'z')
			j = 1;
		else 
			return(0);
		i++;
	}
	return (j);
}

int main(void)
{
	int pruebas;

	pruebas = ft_str_is_alpha("....!dadasdasd");
	
	printf("Resultado: %d\n", pruebas);
}
