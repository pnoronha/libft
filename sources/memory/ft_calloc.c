/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:36:31 by pnoronha          #+#    #+#             */
/*   Updated: 2022/03/06 03:07:30 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*new;

	new = malloc(nmemb * size);
	if (new == NULL)
		return (NULL);
	ft_memset(new, 0, nmemb * size);
	return (new);
}
