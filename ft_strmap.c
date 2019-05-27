/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:32:01 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/27 19:23:11 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	i;

	if (*f && s)
	{
		i = 0;
		if (!(s1 = (char*)ft_memalloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[i])
		{
			s1[i] = (*f)(s[i]);
			i++;
		}
		return (s1);
	}
	return (0);
}
