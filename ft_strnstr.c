/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:24:26 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/03 11:26:17 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int i;
	unsigned int y;

	i = 0;
	if (*s2 == 0)
		return (((char*)s1));
	while (i < len && s1[i])
	{
		y = 0;
		if (s1[i] == s2[0])
		{
			while (s1[i + y] == s2[y] && s1[i + y] != '\0' && s2[y]
				!= '\0' && (i + y) < len)
			{
				y++;
			}
			if (s2[y] == '\0')
				return (&((char *)s1)[i]);
		}
		i++;
	}
	return (0);
}
