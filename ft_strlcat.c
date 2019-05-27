/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 21:39:16 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/21 23:19:09 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int buff;
	int rtrn;
	int i;
	int j;

	i = 0;
	j = 0;
	if ((ft_strlen(dst) + 1) <= size)
		rtrn = (ft_strlen(dst) + ft_strlen(((char*)src)));
	else
		rtrn = (ft_strlen(src) + size);
	buff = size - 1;
	while (dst[i] != '\0')
		i++;
	while (i < buff && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (rtrn);
}
