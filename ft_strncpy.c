/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:16:20 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/24 17:16:45 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && ((char*)src)[i])
	{
		dst[i] = ((char*)src)[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
