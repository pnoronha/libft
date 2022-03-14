/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:16:02 by pnoronha          #+#    #+#             */
/*   Updated: 2022/03/14 20:37:58 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	str_lengh;
	size_t	min_lengh;
	size_t	i;

	if (!s)
		return (NULL);
	str_lengh = ft_strlen(s);
	min_lengh = ft_strlen(&s[start]);
	if (str_lengh <= start || len <= 0)
		return (ft_strdup(""));
	else if (len > min_lengh)
		len = min_lengh;
	sub_str = malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
