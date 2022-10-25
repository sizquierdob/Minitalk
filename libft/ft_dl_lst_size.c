/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dl_lst_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:53:12 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:10:16 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_DL_LST_SIZE
** This function will count the number of elements in a t_dl_lst (double linked
** list) structure and return the number of elements it contains
*/

int	ft_dl_lst_size(t_dl_lst *first)
{
	int			ret;
	t_dl_lst	*temp;

	ret = 0;
	temp = first;
	while (temp)
	{
		temp = temp->next;
		ret++;
	}
	return (ret);
}
