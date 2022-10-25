/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_string_at_first_charset.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:39:21 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:59:59 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	ft_cut_string_at_first_charset(char *str, char *charset)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (ft_strchr(charset, str[i]))
			str[i] = 0;
	}
}
