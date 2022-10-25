/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_has_other_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:14:05 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:14:44 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_has_other_chars(char *str, const char *allowed_charset)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_strchr(allowed_charset, str[i]))
			return (1);
	}
	return (0);
}
