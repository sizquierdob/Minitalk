/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:43:32 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:43:48 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_calloc_exit(size_t count, size_t size)
{
	size_t	total_size;
	void	*ret;

	total_size = size * count;
	ret = malloc(total_size);
	if (!ret)
		exit(EXIT_FAILURE);
	ft_bzero(ret, total_size);
	return (ret);
}
