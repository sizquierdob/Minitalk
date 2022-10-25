/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:41:40 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:42:29 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	current = *lst;
	if (current == 0)
		*lst = new;
	else
	{
		while (current->next != 0)
		{
			current = current->next;
		}
		current->next = new;
		new->next = 0;
	}
}
