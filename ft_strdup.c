/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:01:51 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/18 17:17:30 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*srcbis;
	int		i;

	i = 0;
	if (!(srcbis = (char*)ft_memalloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	while (src[i])
	{
		srcbis[i] = src[i];
		i++;
	}
	srcbis[i] = '\0';
	return (srcbis);
}
