/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnoronha <pnoronha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:28:09 by pnoronha          #+#    #+#             */
/*   Updated: 2022/03/14 20:33:16 by pnoronha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcnt(const char *str, char c)
{
	int		word_nb;
	int		is_word;

	word_nb = 0;
	is_word = 0;
	while (*str)
	{
		if (is_word == 0 && *str != c)
		{
			is_word = 1;
			word_nb++;
		}
		else if (is_word == 1 && *str == c)
		{
			is_word = 0;
		}
		str++;
	}
	return (word_nb);
}
