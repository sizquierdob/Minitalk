/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_until_c_from_charset.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:06:37 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:06:38 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRLEN_UNTIL_C_FROM_CHARSET
** Same as strlen, but will stop counting if a character  from "charset"
** argument is seen 
** This character seen is included in the count (useful for minishell)
*/

int	ft_strlen_until_c_from_charset(const char *str, char *charset)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && !ft_strchr(charset, str[i]))
		i++;
	if (ft_strchr(charset, str[i]))
		i++;
	return (i);
}
