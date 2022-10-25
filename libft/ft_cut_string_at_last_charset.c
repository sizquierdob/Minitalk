/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_string_at_last_charset.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:44:45 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:44:49 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	ft_cut_string_at_last_charset(char *str, char *charset)
{
	int	i;

	i = ft_strlen(str);
	while (--i >= 0)
	{
		if (ft_strchr(charset, str[i]))
			str[i] = 0;
	}
}
