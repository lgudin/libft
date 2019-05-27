/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:00:29 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/21 23:19:20 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(((char *)s));
	while (s[i] != ((char)c) && i >= 0)
		i--;
	if ((((char)c) == '\0' && ((char)c) == '\0') || ((char)c) == ((char *)s)[i])
	{
		return (&((char *)s)[i]);
	}
	return (NULL);
}
