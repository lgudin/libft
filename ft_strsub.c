/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <lgudin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:08:11 by lgudin            #+#    #+#             */
/*   Updated: 2019/10/17 15:51:52 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = NULL;
	if (s != NULL)
	{
		s2 = ft_strnew(len + 1);
		if (s2 != NULL)
		{
			s2[len] = '\0';
			while (len > 0)
			{
				len--;
				s2[len] = s[start + len];
			}
		}
	}
	return (s2);
}