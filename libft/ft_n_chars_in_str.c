/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_chars_in_str.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:36 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:52:38 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_n_chars_in_str(char *str, char c)
{
	int	count;
	int	i;

	if (!str)
		return (0);
	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == c)
			count++;
	}
	return (count);
}
