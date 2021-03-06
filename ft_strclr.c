/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/03 17:12:16 by blo               #+#    #+#             */
/*   Updated: 2016/09/08 17:40:56 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (s == NULL)
		return ;
	str = (char *)s;
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
}
