/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longest_strlen_in_strtab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:41:40 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:41:44 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_longest_strlen_in_strtab(char **str_tab)
{
	int	i;
	int	max;
	int	current;

	if (!str_tab)
		return (0);
	i = -1;
	max = 0;
	while (str_tab[++i])
	{
		current = (int)ft_strlen(str_tab[i]);
		if (current > max)
			max = current;
	}
	return (max);
}
