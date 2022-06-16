/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:53:53 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 17:46:18 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isprint - checks if 'c' is printable
 *
 * The ft_isprint function checks if the parameter 'c' is printable according to
 * the ASCII table.
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
