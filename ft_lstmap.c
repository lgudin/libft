/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgudin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 17:42:49 by lgudin            #+#    #+#             */
/*   Updated: 2018/12/04 15:47:09 by lgudin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*first_elem;

	if (!(f && lst))
		return (0);
	new = f(lst);
	first_elem = new;
	while (lst->next)
	{
		lst = lst->next;
		new->next = lst;
		new->next = f(new->next);
		new = new->next;
	}
	return (first_elem);
}
