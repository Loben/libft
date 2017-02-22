/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 15:13:39 by blo               #+#    #+#             */
/*   Updated: 2016/04/19 08:46:08 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	counter;

	str = (char *)s;
	counter = 0;
	while (counter < n)
	{
		if ((char)c == str[0])
			return ((void*)str);
		str++;
		counter++;
	}
	return (NULL);
}
