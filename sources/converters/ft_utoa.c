/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 10:11:55 by pnoronha          #+#    #+#             */
/*   Updated: 2022/06/15 02:35:07 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa(unsigned int n)
{
	char			*str;
	int				count;
	unsigned int	nbr;

	if (n == 0)
		return (ft_strdup("0"));
	count = ft_uintlen(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (--count >= 0)
	{
		nbr = n % 10;
		str[count] = nbr + '0';
		n /= 10;
	}
	return (str);
}
