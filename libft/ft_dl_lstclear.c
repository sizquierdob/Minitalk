/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:53:16 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:53:18 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_DL_LSTCLEAR
** This function, given any member of t_dl_lst (double linked list) will free
** and clear all of its contents
** Unlike its t_lst equivalent, it will free in both sides (all the elements
** after, but also all the elements before the given element) and set all to 0
*/

void	ft_dl_lstclear(t_dl_lst *lst, void (*del)(void*))
{
	t_dl_lst	*temp;
	t_dl_lst	*last_address_of_temp;

	if (!lst || !del)
		return ;
	temp = ft_dl_lst_first(lst);
	last_address_of_temp = temp;
	while (temp)
	{
		temp = temp->next;
		ft_dl_lstdelone(last_address_of_temp, del);
		last_address_of_temp = temp;
	}
}
