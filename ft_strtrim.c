/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 22:24:24 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/05 00:06:21 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblank(const char *s, int i)
{
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',')
		return (1);
	else
		return (0);
}

static size_t	ft_realen_end(const char *s, size_t *i)
{
	size_t	len;

	*i = 0;
	len = ft_strlen(s);
	while (s[*i] && ft_isblank(s, *i))
	{
		len--;
		*i = *i + 1;
	}
	if (len == 0)
		return (0);
	*i = ft_strlen(s) - 1;
	while (*i && ft_isblank(s, *i))
	{
		len--;
		*i = *i - 1;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	char	*s1;
	size_t	len;
	size_t	end;
	size_t	i;
	int		y;

	if (!s)
		return (NULL);
	end = 0;
	i = 0;
	y = 0;
	len = ft_realen_end((char*)s, &end);
	if (!(s1 = ft_memalloc(sizeof(char) * len + 1)))
		return (NULL);
	while (ft_isblank(s, i) && s[i])
	{
		i++;
	}
	while (i <= end && s[i])
	{
		s1[y] = s[i];
		y++;
		i++;
	}
	return (s1);
}
