/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:31:50 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/08 20:21:36 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	
	i = 0;
	if(str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z' && str[i-1]  >= 32 && str[i-1] <= 47)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	
	i = 0;
	while(str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	return (str);
}

int main()
{
	char prueba[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(&prueba[0]);
}
