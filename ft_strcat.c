/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 05:13:18 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/21 23:18:52 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t len;

	len = ft_strlen(s1);
	i = 0;
	while (i < ft_strlen(((char *)s2)))
	{
		s1[len + i] = ((char *)s2)[i];
		i++;
	}
	s1[i + len] = '\0';
	return (s1);
}
