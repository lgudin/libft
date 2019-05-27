/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 20:59:47 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/05 03:05:29 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compte_mots(char *str, char c)
{
	int i;
	int compte_mot;

	i = 0;
	compte_mot = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
		{
			compte_mot++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (compte_mot);
}

static int	longest_word_in(char *str, char c)
{
	int i;
	int current_size;
	int longest_size;

	i = 0;
	current_size = 0;
	longest_size = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		while (str[i] != c && str[i])
		{
			current_size++;
			i++;
		}
		if (current_size > longest_size)
			longest_size = current_size;
		current_size = 0;
	}
	return (longest_size);
}

static char	**str_to_strbis(char *s, char **strbis, int nb, char c)
{
	int i;
	int y;
	int z;
	int len;

	len = ft_strlen(s);
	i = 0;
	y = 0;
	z = 0;
	while (y < nb)
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && i < len)
		{
			strbis[y][z] = s[i];
			i++;
			z++;
		}
		strbis[y][z] = '\0';
		y++;
		z = 0;
		i++;
	}
	return (strbis);
}

char		**ft_strsplit(const char *str, char c)
{
	int		nbr_mots;
	int		i;
	char	**str_split;
	int		longest;

	if (!((char*)str))
		return (0);
	longest = longest_word_in((char*)str, c);
	i = 0;
	nbr_mots = 0;
	nbr_mots = compte_mots((char*)str, c);
	if (!(str_split = (char**)ft_memalloc(sizeof(char*) * nbr_mots + 1)))
		return (NULL);
	while (i < nbr_mots)
	{
		if (!(str_split[i] = (char*)ft_memalloc(sizeof(char) * longest)))
			return (NULL);
		i++;
	}
	str_split[nbr_mots] = 0;
	if (str_split == 0)
		return (0);
	return (str_to_strbis((char*)str, str_split, nbr_mots, c));
}
