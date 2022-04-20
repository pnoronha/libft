/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:23:43 by pnoronha          #+#    #+#             */
/*   Updated: 2022/04/20 16:08:01 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

double	ft_atod(const char *nptr)
{
	int			i;
	int			sign;
	int			dot;
	double		devider;
	double		value;

	i = 0;
	while (ft_isspace((int)nptr[i]))
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	devider = 10;
	dot = 0;
	value = 0;
	while (ft_isdigit((int)nptr[i]) || (nptr[i] == '.' && dot != 1))
	{
		if (nptr[i] == '.')
		{
			dot++;
			i++;
			continue ;
		}
		if (dot == 1)
		{
			value += (double)(nptr[i] - '0') / devider;
			devider = devider * 10;
		}
		else
			value = value * 10 + (nptr[i] - '0');
		i++;
	}
	return ((double)value * sign);
}
