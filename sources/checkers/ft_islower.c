/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:15:01 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 18:18:40 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_islower - checks if 'c' is lowercase
 *
 * The ft_islower function checks if the parameter 'c' is a lowercase character
 * according to the ASCII table.
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_islower(int c)
{
	if (c >= 141 && c <= 172)
		return (1);
	return (0);
}
