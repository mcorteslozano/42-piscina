/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:22:27 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/09 17:49:53 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int tam;

	i = 0;
	tam = size - 1;
	if (size > 0)
	{
		while (tam > 0 && src[i] != '\0')
		{
			dest[i] = src[i];
			tam--;
			i++;
		}
	}
	else
	{
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
