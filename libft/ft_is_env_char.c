/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_env_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:22:44 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:16:45 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** ft_is_env_name_char
** This function returns 1 if c is a valid character for an env_name
** or returns 0 if it is not
** Valid characters include letters, digits and '_' characters
*/

int	ft_is_env_name_char(char c)
{
	if (ft_isalnum(c) || c == '_')
		return (1);
	return (0);
}
