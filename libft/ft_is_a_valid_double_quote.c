/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_a_valid_double_quote.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:22:35 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:16:33 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** ft_is_a_valid_double_quote
** This function returns 1 str[i] is a valid double quote
** (not preceeded by a \) or 0 if it is not
*/

int	ft_is_a_valid_double_quote(char *str, int i)
{
	if (str[i] == '\"' && i && str[i - 1] != '\\')
		return (1);
	else if (str[i] == '\"' && !i)
		return (1);
	else
		return (0);
}
