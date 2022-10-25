/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:08:46 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:08:49 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ret;

	total_size = size * count;
	ret = malloc(total_size);
	if (ret == 0)
	{
		return (0);
	}
	ft_bzero(ret, total_size);
	return (ret);
}
