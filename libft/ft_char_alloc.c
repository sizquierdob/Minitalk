/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:55:22 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:55:25 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_CHAR_ALLOC
** Malloc's the required space for a string to be printed by printf
** Is like "calloc", but instead of filling the string with zeroes it fills it
** with the char provided in the argument
** Note: N_CHARS shouldn't include space for '\0' (strlen can be used for it)
** Returns the pointer to the newly allocated string, NULL if malloc fails
*/

char	*ft_char_alloc(int n_chars, char c)
{
	char	*ret_str;
	int		i;

	ret_str = malloc(sizeof(*ret_str) * (n_chars + 1));
	if (!(ret_str))
		return (0);
	i = -1;
	while (++i < n_chars)
		ret_str[i] = c;
	ret_str[n_chars] = 0;
	return (ret_str);
}
