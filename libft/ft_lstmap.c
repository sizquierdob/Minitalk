/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:57:50 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:57:54 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current_new;
	t_list	*current;

	if (!lst || !f || !del)
		return (0);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (0);
	current = lst->next;
	current_new = new_list;
	while (current != 0)
	{
		current_new = ft_lstnew(f(current->content));
		if (!(current_new))
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, current_new);
		current = current->next;
	}
	return (new_list);
}
