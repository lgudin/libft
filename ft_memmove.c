/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 20:46:12 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/18 13:08:01 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstc;
	char	*srcc;

	dstc = (char*)dst;
	srcc = (char*)src;
	if (srcc < dstc)
	{
		i = len - 1;
		while ((int)i >= 0)
		{
			dstc[i] = srcc[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dstc[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}
