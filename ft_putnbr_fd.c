/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:03:54 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/27 15:04:20 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_setnbis(int n, long nbis, int fd)
{
	nbis = (long)n;
	if (nbis < 0)
	{
		ft_putchar_fd('-', fd);
		if (nbis == -2147483648)
			nbis++;
		nbis = -nbis;
	}
	return (nbis);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		y;
	long	nbis;

	nbis = 0;
	nbis = ft_setnbis(n, nbis, fd);
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
			ft_putchar_fd('8', fd);
		else
			ft_putchar_fd(nbis / i + '0', fd);
		nbis %= i;
		i /= 10;
		y--;
	}
}
