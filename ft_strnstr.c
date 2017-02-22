/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 15:56:42 by blo               #+#    #+#             */
/*   Updated: 2016/04/19 08:39:57 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!*s2)
		return ((char *)s1);
	i = ft_strlen(s2);
	while (*s1 && n-- >= i)
	{
		if (!(ft_strncmp(s1, s2, i)))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
