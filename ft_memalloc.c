/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:34:49 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/27 19:10:55 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t			i;
	void			*space;
	unsigned char	*tmp;

	i = 0;
	if (!(space = (void*)malloc(sizeof(void) * (size))))
		return (NULL);
	tmp = space;
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return (space);
}
