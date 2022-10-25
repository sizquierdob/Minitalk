/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:13:46 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:13:49 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_FREE_STR
** This function frees its argument and sets its pointer to NULL to avoid
** double free in the future
** Returns a null string
*/

char	*ft_free_str(char **str)
{
	if (str && *str)
	{
		free(*str);
		*str = 0;
	}
	return (0);
}
