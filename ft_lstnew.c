/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 15:46:29 by blo               #+#    #+#             */
/*   Updated: 2016/09/08 16:27:41 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list*)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(list->content = (void*)ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(list->content, content, content_size);
		list->content_size = content_size;
	}
	else
	{
		list->content = NULL;
		list->content_size = 0;
	}
	list->next = NULL;
	return (list);
}
