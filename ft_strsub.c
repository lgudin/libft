/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:08:11 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/04 15:45:24 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned intstart, size_t len)
{
	char	*s1;
	size_t	i;

	if (!(s))
		return (NULL);
	i = 0;
	if (!(s1 = (char*)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		s1[i] = s[intstart + i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
