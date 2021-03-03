/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:59:50 by mcortes-          #+#    #+#             */
/*   Updated: 2021/03/03 18:14:58 by mcortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strnbr(int nb);

void	ft_putnbr(int nb)
{
	if (nb == 0)
		write(1, &"0", 1);
	if (nb < 0)
	{
		nb = -nb;
		write(1, &"-", 1);
	}
	if (nb > 0)
		ft_strnbr(nb);
}

void	ft_strnbr(int nb)
{
	int i;
	int digit;

	if (nb != 0)
	{
		i = nb % 10;
		digit = i + '0';
		nb = nb / 10;
		ft_strnbr(nb);
		write(1, &digit, 1);
	}
}
