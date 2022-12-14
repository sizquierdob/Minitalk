/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmptab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:02:26 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:02:29 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRCMP_TAB
** This function checks if the *str_to_compare argument can be found
** in the tab of strings **str_tab
** Returns 1 if str_to_compare is equal to one of the strings of the tab
** Returns 0 otherwise
*/

int	ft_strcmptab(char *str_to_compare, char **str_tab)
{
	int	i;

	i = -1;
	while (str_tab[++i])
	{
		if (ft_strcmp(str_to_compare, str_tab[i]))
			return (1);
	}
	return (0);
}
