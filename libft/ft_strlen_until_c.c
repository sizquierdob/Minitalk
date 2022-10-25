/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_until_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:06:41 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:06:43 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRLEN_UNTIL_C
** Same as strlen, but will stop counting if a 'c' argument character is seen
** This character seen is included in the count (useful for minishell)
*/

int	ft_strlen_until_c(const char *str, char c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		c++;
	return (i);
}
