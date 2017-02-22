/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 18:14:14 by blo               #+#    #+#             */
/*   Updated: 2016/04/19 08:53:01 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		size;
	char	*res;

	if (s1 && s2)
	{
		size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		res = (char *)malloc(sizeof(char) * size + 1);
		if (!res)
			return (NULL);
		i = 0;
		res = ft_strcpy(res, s1);
		res = ft_strcat(res, s2);
		return (res);
	}
	else
		return (NULL);
}
