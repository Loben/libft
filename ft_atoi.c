/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 02:59:25 by blo               #+#    #+#             */
/*   Updated: 2016/04/12 12:23:13 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int result;
	int negatif;

	result = 0;
	negatif = 0;
	while (*str == ' ' || *str == '\v' || *str == '\t' || *str == '\f'
			|| *str == '\r' || *str == '\n')
		str++;
	if (*str == '-')
	{
		negatif = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result += *str++ - '0';
		if (*str >= '0' && *str <= '9')
			result *= 10;
	}
	return (negatif ? -result : result);
}
