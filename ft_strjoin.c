/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:21:17 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/28 19:02:51 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	size_t	y;
	char	*str;

	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		if (!(str = (char*)ft_memalloc(sizeof(char) * len + 1)))
			return (NULL);
		i = 0;
		y = 0;
		while (s1[y])
			str[i++] = s1[y++];
		y = 0;
		while (s2[y])
			str[i++] = s2[y++];
		return (str);
	}
	return (0);
}
