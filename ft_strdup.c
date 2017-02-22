/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 15:29:27 by blo               #+#    #+#             */
/*   Updated: 2016/04/19 08:55:43 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen((char *)(s)) + 1));
	if (!res)
		return (NULL);
	res = ft_strcpy(res, s);
	return (res);
}
