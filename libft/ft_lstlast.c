/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:47:58 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:48:00 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
	{
		return (0);
	}
	while (lst->next != 0)
	{
		lst = lst->next;
	}
	return (lst);
}
