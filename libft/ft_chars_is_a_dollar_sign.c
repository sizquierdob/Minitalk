/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars_is_a_dollar_sign.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:03:43 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:03:45 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** ft_char_is_a_dollar_sign
** This function returns 1 if str[i] is a '$' character not preceeded by a '\'.
** Returns 0 otherwise
** Used in minishell to determine the start of the env variable sequence
*/

int	ft_char_is_a_dollar_sign(char *str, int i)
{
	if ((str[i] == '$' && i && str[i - 1] != '\\') || (str[i] == '$' && !i))
		return (1);
	return (0);
}
