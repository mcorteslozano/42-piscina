/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:50:13 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/11 12:34:06 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hexa;
	unsigned char	value;

	hexa = "0123456789abcdf";
	while (*str != '\0')
	{
		value = (unsigned char)*str;
		if (value < 32 || value > 126)
		{
			ft_putchar('\\');
			ft_putchar(hexa[value / 16]);
			ft_putchar(hexa[value % 16]);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
