/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 12:04:39 by blo               #+#    #+#             */
/*   Updated: 2016/09/08 17:58:06 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*str;
	unsigned int	counter;

	str = (char *)s;
	counter = 0;
	if (s == NULL || (*f) == NULL)
		return ;
	while (str[counter])
	{
		(*f)(counter, &str[counter]);
		counter++;
	}
}
