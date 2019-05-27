/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 20:53:58 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/25 20:22:04 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_setnbis(int n, long nbis)
{
	nbis = (long)n;
	if (nbis < 0)
	{
		ft_putchar('-');
		if (nbis == -2147483648)
			nbis++;
		nbis = -nbis;
	}
	return (nbis);
}

void		ft_putnbr(int n)
{
	int		i;
	int		y;
	long	nbis;

	nbis = 0;
	nbis = ft_setnbis(n, nbis);
	i = 1;
	y = 1;
	while (y < ft_digitlen(nbis))
	{
		i *= 10;
		y++;
	}
	while (y > 0)
	{
		if (n == -2147483648 && y == 1)
			ft_putchar('8');
		else
			ft_putchar(nbis / i + '0');
		nbis %= i;
		i /= 10;
		y--;
	}
}
