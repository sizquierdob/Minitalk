/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:52:44 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:52:47 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_DL_LST_LAST
** Given an element of t_dl_lst (double linked list)
** this function will find its last element and return its address
*/

t_dl_lst	*ft_dl_lst_last(t_dl_lst *first)
{
	t_dl_lst	*ret;

	if (!first)
		return (0);
	ret = first;
	while (ret->next)
		ret = ret->next;
	return (ret);
}
