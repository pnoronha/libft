/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 16:22:56 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 17:41:48 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isalpha - checks if 'c' is alphabetic
 *
 * The ft_isalpha function checks if the parameter 'c' is alphabetic according
 * to the ASCII table.
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
