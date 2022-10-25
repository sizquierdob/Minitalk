/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:42:42 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:42:45 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*last_address_of_temp;

	if (lst == 0 || del == 0 || *lst == 0)
		return ;
	temp = *lst;
	last_address_of_temp = temp;
	while (temp != 0)
	{
		del(temp->content);
		temp = temp->next;
		free(last_address_of_temp);
		last_address_of_temp = temp;
	}
}
