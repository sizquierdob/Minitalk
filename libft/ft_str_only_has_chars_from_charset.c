/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_only_has_chars_from_charset.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:49:35 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:49:37 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STR_ONLY_HAS_CHARS_FROM_CHARSET
** This function returns 1 if str argument is filled with ONLY chars from
** charset argument. It will return 0 if it sees at least one character not
** belonging to charset in str
*/

int	ft_str_only_has_chars_from_charset(char *str, char *charset)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_strchr(charset, str[i]))
			return (0);
	}
	return (1);
}
