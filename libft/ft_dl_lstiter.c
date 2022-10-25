/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lstiter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:53:22 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:53:24 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_DL_LSTITER
** It will apply function f to all of the elements
** before and after the *lst element
*/

void	ft_dl_lstiter(t_dl_lst *lst, void (*f)(void *))
{
	t_dl_lst	*temp;

	if (!lst || !f)
		return ;
	temp = ft_dl_lst_first(lst);
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
