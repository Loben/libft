/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 00:29:13 by blo               #+#    #+#             */
/*   Updated: 2016/04/19 08:20:22 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;

	str = (char*)s1;
	i = 0;
	if (!*s2)
		return (str);
	while (str[i])
	{
		j = 0;
		while (s2[j] == str[i + j])
		{
			if (!(s2[j + 1]))
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
