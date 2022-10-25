/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:55:54 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:55:57 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pnt;

	pnt = malloc(sizeof(t_list));
	if (pnt == 0)
	{
		return (0);
	}
	pnt->content = content;
	pnt->next = 0;
	return (pnt);
}
