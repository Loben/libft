/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 12:03:14 by blo               #+#    #+#             */
/*   Updated: 2016/09/08 17:54:56 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	char			*str_new;
	unsigned int	counter;

	if (s == NULL || (*f) == NULL)
		return (NULL);
	str = (char *)s;
	counter = 0;
	if (!(str_new = ft_memalloc(ft_strlen(str) + 1)))
		return (NULL);
	while (str[counter])
	{
		str_new[counter] = (*f)(str[counter]);
		counter++;
	}
	str_new[counter] = '\0';
	return (str_new);
}
