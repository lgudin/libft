/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:04:25 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/05 03:00:20 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && n != 0 && s1[i])
	{
		n--;
		i++;
	}
	if (n == 0)
		return (((unsigned char*)s1)[i - 1] - ((unsigned char*)s2)[i - 1]);
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
