/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_chars_in_str_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:45 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:52:47 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_n_chars_in_str_tab(char **str_tab, char c)
{
	int	i;
	int	count;

	if (!str_tab)
		return (0);
	i = -1;
	count = 0;
	while (str_tab[++i])
		count += ft_n_chars_in_str(str_tab[i], c);
	return (count);
}
