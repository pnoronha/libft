/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:16:19 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/15 01:57:35 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	int		sign;
	long	value;

	while (ft_isspace((int)*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr == '-' && nptr++)
			sign = -1;
	value = 0;
	while (ft_isdigit((int)*nptr))
	{
		value = value * 10 + (*nptr - '0');
		nptr++;
	}
	return ((long)(value * sign));
}
