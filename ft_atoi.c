/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:10:12 by lgudin            #+#    #+#             */
/*   Updated: 2018/11/27 16:05:15 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define FT_D ft_isdigit

int	ft_atoi(const char *str)
{
	size_t	i;
	long	somme;
	int		signe;

	signe = 1;
	somme = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '
			|| ((str[i] == '-' || str[i] == '+') && FT_D(str[i + 1])))
		i++;
	if (i > 0 && str[i - 1] == '-' && FT_D(str[i]) && somme == 0)
		signe = -1;
	if (FT_D(str[i]) && somme == 0)
		while (FT_D(str[i]))
		{
			somme = somme * 10 + (str[i] - '0');
			i++;
		}
	return (somme * signe);
}
