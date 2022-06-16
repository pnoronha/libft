/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:35:52 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 17:47:54 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isdigit - checks if 'c' is numeric
 *
 * The ft_isdigit function checks if the parameter 'c' is a digit (0 through 9)
 * according to the the ASCII table.
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
