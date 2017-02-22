/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 18:05:02 by blo               #+#    #+#             */
/*   Updated: 2016/09/08 18:02:03 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char *str1;
	char *str2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (ft_strncmp(str1, str2, n) == 0)
		return (1);
	else
		return (0);
}
