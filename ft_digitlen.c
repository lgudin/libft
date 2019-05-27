/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 21:14:04 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/27 13:34:18 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digitlen(int n)
{
	size_t	i;
	size_t	digit_len;
	long	nbis;

	nbis = (long)n;
	digit_len = 0;
	i = 1;
	if (nbis < 0)
	{
		if (nbis == -2147483648)
			nbis++;
		nbis = -nbis;
	}
	while (nbis / i > 0)
	{
		i = i * 10;
		digit_len++;
	}
	return (digit_len);
}
