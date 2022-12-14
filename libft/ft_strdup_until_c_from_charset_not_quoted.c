/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_until_c_from_charset_not_quoted.c        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:04:01 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:04:02 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRDUP_UNTIL_C_FROM_CHARSET_NOT_QUOTED
** Same as strdup, but will stop copying if a character from "charset" argument
** is seen. The character must not be between two quotes (simple or double).
** If it's the case, the function'll keep copying until it sees a character from
** *set unquoted or it reached the end of *src.
** This character seen is included in the copy (useful for minishell)
*/

char	*ft_strdup_until_c_from_charset_not_quoted(const char *src, char *set)
{
	char	*str;
	char	*my_src;
	int		len;

	if (!src)
		return (0);
	my_src = (char *)(src);
	len = ft_strlen_until_c_from_charset_not_quoted(my_src, set);
	str = ft_calloc_exit(len + 1, sizeof(char));
	if (!str)
		exit(EXIT_FAILURE);
	return (ft_strcpy_until_c_from_charset_not_quoted(str, my_src, set));
}
