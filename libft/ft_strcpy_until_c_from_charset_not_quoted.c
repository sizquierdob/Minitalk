/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_until_c_from_charset_not_quoted.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:02:59 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:03:01 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRCPY_UNTIL_C_FROM_CHARSET_NOT_QUOTED
** Same as strcpy, but will stop copying if a character from "set" argument
** is seen. The character must not be between two quotes (simple or double).
** If it's the case, the function'll keep copying until it sees a character from
** *set unquoted or it reached the end of *s.
** This character seen is included in the copy (useful for minishell)
*/

char	*ft_strcpy_until_c_from_charset_not_quoted(char *d, char *s, char *set)
{
	int		i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		if (ft_strchr(set, s[i]) && !ft_char_between_the_quotes(i, s))
		{
			i++;
			break ;
		}
		i++;
	}
	d[i] = '\0';
	return (d);
}
