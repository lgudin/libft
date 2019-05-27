/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 14:05:16 by lgudin            #+#    #+#             */
/*   Updated: 2019/05/23 17:05:34 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*sp_strjoinfree(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2 || !(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	str = ft_strcpy(str, s1);
	free((char*)s1);
	return (ft_strcat(str, s2));
}

char			*ft_strdupfree(char *begin, char *src)
{
	char	*srcbis;
	int		i;

	i = 0;
	if (!(srcbis = (char*)ft_memalloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	while (src[i])
	{
		srcbis[i] = src[i];
		i++;
	}
	srcbis[i] = '\0';
	ft_strdel(&begin);
	return (srcbis);
}

static int		get_read(int const fd, char **mem)
{
	char		*buff;
	char		*tmp;
	int			ret;

	if (!(buff = (char *)malloc(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	ret = read(fd, buff, BUFF_SIZE);
	if (ret > 0)
	{
		buff[ret] = '\0';
		if (!(tmp = ft_strjoin(*mem, buff)))
		{
			free(buff);
			return (-1);
		}
		free(*mem);
		*mem = tmp;
	}
	free(buff);
	return (ret);
}

int				shorter(char *mem[5000], int fd)
{
	if (ft_strlen(mem[fd]) == 0)
	{
		ft_strdel(&mem[fd]);
		return (0);
	}
	if (!(mem[fd] = sp_strjoinfree(mem[fd], "\n")))
	{
		ft_strdel(&mem[fd]);
		return (-1);
	}
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	static	char	*mem[5000] = {0};
	char			*store;
	int				ret;

	if (fd < 0 || !line || BUFF_SIZE < 1 || fd > 5000 ||
			(!mem[fd] && (mem[fd] = ft_memalloc(sizeof(*mem[fd]))) == 0))
		return (-1);
	store = ft_strchr(mem[fd], '\n');
	while (store == NULL)
	{
		if ((ret = get_read(fd, &mem[fd])) == -1)
		{
			ft_strdel(&mem[fd]);
			return (-1);
		}
		if (ret == 0 && ((ret = shorter(mem, fd)) != 1))
			return (ret);
		if (ret < 0)
			return (-1);
		else
			store = ft_strchr(mem[fd], '\n');
	}
	*line = ft_strsub(mem[fd], 0, ft_strlen(mem[fd]) - ft_strlen(store));
	mem[fd] = ft_strdupfree(mem[fd], store + 1);
	return (1);
}
