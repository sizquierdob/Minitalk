/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_tab_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:49:12 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:49:16 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_str_tab_len(char **str_tab)
{
	int	i;

	i = 0;
	if (!str_tab)
		return (0);
	while (str_tab[i])
		i++;
	return (i);
}
