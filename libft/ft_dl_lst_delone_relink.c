/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_delone_relink.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:45:31 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:45:34 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_DL_LSTDELONE_RELINK
** This function will remove one specific t_dl_lst element and its content
** ! relinks the previous and next elements
*/

void	ft_dl_lstdelone_relink(t_dl_lst *to_delete, void (*del)(void*))
{
	t_dl_lst	*prev;
	t_dl_lst	*next;

	if (!to_delete || !del)
		return ;
	prev = to_delete->previous;
	next = to_delete->next;
	del(to_delete->content);
	free(to_delete);
	if (prev)
		prev->next = next;
	if (next)
		next->previous = prev;
}
