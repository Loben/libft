/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 12:05:41 by blo               #+#    #+#             */
/*   Updated: 2016/09/08 17:51:39 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char			*str;
	unsigned int	counter;

	if (s == NULL || (*f) == NULL)
		return ;
	str = (char *)s;
	counter = 0;
	while (str[counter])
	{
		(*f)(&str[counter]);
		counter++;
	}
}
