/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:22:27 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/11 13:32:40 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int buffer;

	x = 0;
	buffer = 0;
	while (src[x] != '\0')
		x++;
	buffer = x;
	x = 0;
	if (size != 0)
	{
		while (x < size)
		{
			if (x == size - 1)
				dest[x] = 0;
			else
				dest[x] = src[x];
			x++;
		}
	}
	return (buffer);
}
