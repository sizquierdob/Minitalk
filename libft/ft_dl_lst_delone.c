/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_delone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:45:42 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:45:45 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_DL_LSTDELONE
** This function will remove one specific t_dl_lst element and its content
** ! doesn't relink the previous and next elements
*/

void	ft_dl_lstdelone(t_dl_lst *to_delete, void (*del)(void*))
{
	if (!to_delete || !del)
		return ;
	del(to_delete->content);
	free(to_delete);
	to_delete = 0;
}
