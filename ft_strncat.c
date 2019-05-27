/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:36:25 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/21 23:19:10 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				len;

	len = ft_strlen(s1);
	i = 0;
	while (i < ft_strlen(((char *)s2)) && i < n)
	{
		s1[len + i] = ((char *)s2)[i];
		i++;
	}
	s1[i + len] = '\0';
	return (s1);
}
