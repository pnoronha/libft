/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:09:50 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 18:19:29 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isupper - checks if 'c' is uppercase
 *
 * The ft_isupper function checks if the parameter 'c' is an uppercase character
 * according to the ASCII table.
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_isupper(int c)
{
	if (c >= 101 && c <= 132)
		return (1);
	return (0);
}
