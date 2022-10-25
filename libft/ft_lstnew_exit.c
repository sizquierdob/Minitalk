/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:57:33 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:57:37 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

t_list	*ft_lstnew_exit(void *content)
{
	t_list	*pnt;

	pnt = malloc(sizeof(t_list));
	if (!pnt)
		exit(EXIT_FAILURE);
	pnt->content = content;
	pnt->next = 0;
	return (pnt);
}
