/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrset_not_quoted.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:58:54 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:58:57 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** Same as ft_strchr, but instead of looking for only one character,
** is looking for one of the characters of the charset.
** Also it only considers a character to be found if it's not between two
** quotes (single or double)
** Returns the address of the first occurence of one of the charset characters
** or a NULL pointer if none were found
*/

char	*ft_strchrset_not_quoted(char *str, char *charset)
{
	int		i;

	if (!str || !charset)
		return (0);
	i = -1;
	while (str[++i])
	{
		if (ft_strchr(charset, str[i]) && !ft_char_between_the_quotes(i, str))
			return (&str[i]);
	}
	return (0);
}
