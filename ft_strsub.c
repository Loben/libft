/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 18:14:56 by blo               #+#    #+#             */
/*   Updated: 2016/04/19 08:38:43 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*res;

	i = start;
	j = 0;
	if (s)
	{
		res = (char *)malloc(sizeof(char) * (len + 1));
		if (res == NULL)
			return (res);
		while (j < len)
		{
			res[j] = s[i];
			i++;
			j++;
		}
		res[j] = '\0';
		return (res);
	}
	else
		return (NULL);
}
