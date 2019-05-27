/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 23:16:09 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/05 00:16:38 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nb)
{
	int		i[2];
	char	*s;

	if (nb <= 0 ? (nb == -2147483648 ||
			!(s = (char *)ft_memalloc(sizeof(char) * (ft_digitlen(nb) + 2))))
				: (nb == -2147483648 || !(s = (char *)ft_memalloc(sizeof(char)
					* (ft_digitlen(nb) + 1)))))
		return (nb == -2147483648 ? ft_strdup("-2147483648") : NULL);
	i[0] = (nb < 0);
	i[1] = nb;
	s[0] = (nb >= 0 ? '0' * (nb == 0) : '-');
	while (i[1])
		i[1] /= 10 + (0 * ++(i[0]));
	while (--(i[0]) >= !!s[0] && (s[i[0]] = '0' + (nb < 0 ? -nb : nb) % 10))
		nb /= 10;
	return (s);
}
