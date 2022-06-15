/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:16:25 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/15 01:57:33 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		value;

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
	return ((int)(value * sign));
}
