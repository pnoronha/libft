/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:40:49 by pnoronha          #+#    #+#             */
/*   Updated: 2022/03/06 13:26:18 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t		len;

	len = 0;
	while (*s && maxlen--)
	{
		len++;
		s--;
	}
	return (len);
}
