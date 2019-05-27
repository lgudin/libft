/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:10:20 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/24 20:39:39 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*my_src;
	char	*my_dst;

	my_src = (char*)src;
	my_dst = (char*)dst;
	i = 0;
	while (i < n)
	{
		my_dst[i] = my_src[i];
		i++;
	}
	return (dst);
}
