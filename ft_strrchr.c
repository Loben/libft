/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 15:54:56 by blo               #+#    #+#             */
/*   Updated: 2016/04/19 08:52:24 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;
	int		counter;

	str = (char*)s;
	counter = 0;
	if (str || str == '\0')
	{
		len = ft_strlen(str);
		while (counter < (int)len)
		{
			counter++;
			str++;
		}
		while (counter >= 0)
		{
			if (str[0] == (char)c)
				return (str);
			str--;
			counter--;
		}
	}
	return (NULL);
}
