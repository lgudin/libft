/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 18:08:03 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/27 17:52:58 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	car;

	car = ((char)c);
	i = 0;
	while (i < n)
	{
		if (car == ((unsigned char*)s)[i])
			return (((unsigned char*)s) + i);
		i++;
	}
	return (NULL);
}
