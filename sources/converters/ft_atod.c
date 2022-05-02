/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:23:43 by pnoronha          #+#    #+#             */
/*   Updated: 2022/05/02 22:59:40 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static double	converter(const char *nptr)
{
	int			dot;
	double		devider;
	double		value;

	devider = 10;
	dot = 0;
	value = 0;
	while (ft_isdigit((int)*nptr) || (*nptr == '.' && dot != 1))
	{
		if (*nptr == '.' && nptr++)
		{
			dot++;
			continue ;
		}
		if (dot == 1)
		{
			value += (double)(*nptr - '0') / devider;
			devider = devider * 10;
		}
		else
			value = value * 10 + (*nptr - '0');
		nptr++;
	}
	return (value);
}

double	ft_atod(const char *nptr)
{
	int			sign;
	double		value;

	while (ft_isspace((int)*nptr))
		nptr++;
	sign = 1;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr == '-' && nptr++)
			sign = -1;
	return ((double)(converter(nptr) * sign));
}
