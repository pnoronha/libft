/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:38:21 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 17:41:58 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isalnum - checks if 'c' is alphanumeric
 *
 * The ft_isalnum function checks if the parameter 'c' is alphabetic or numeric
 * according to ASCII table.
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
