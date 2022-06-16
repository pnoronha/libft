/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:41:20 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 18:00:13 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isascii - checks if 'c' is an ASCII character
 *
 * The ft_isascii function checks if the parameter 'c' is an 7-bit unsigned char
 * that fits into the ASCII character set.
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
