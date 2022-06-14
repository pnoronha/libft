/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_dptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:00:36 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/05 15:33:04 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_dptr(void **dptr)
{
	int	i;

	if (!dptr)
		return ;
	i = 0;
	while (dptr[i] != NULL)
	{
		free(dptr[i]);
		i++;
	}
	free(dptr);
}
