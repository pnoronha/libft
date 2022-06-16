/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:19:39 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/16 17:54:07 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief ft_isspace - checks if 'c' is a white-space
 *
 * The ft_isspace function checks if the parameter 'c' is a white-space
 * character. It expand to: space, form-feed ('\f'), newline ('\n'), carriage
 * return ('\r'), horizontal tab ('\t') and vertical tab ('\v').
 *
 * @param c
 * @return int - The returned value is non zero if the character 'c' falls
 * into the tested class, and zero if not.
 */

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\r' || \
		c == '\n' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
