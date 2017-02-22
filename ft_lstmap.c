/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:43:45 by blo               #+#    #+#             */
/*   Updated: 2016/09/08 15:44:53 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*lstnew;
	t_list	*res;

	lstnew = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!lstnew)
		{
			lstnew = tmp;
			res = lstnew;
			lstnew->next = NULL;
		}
		else
		{
			lstnew->next = tmp;
			tmp->next = NULL;
			lstnew = lstnew->next;
		}
		lst = lst->next;
	}
	return (res);
}
