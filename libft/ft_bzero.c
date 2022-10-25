/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:30:03 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:30:08 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*my_str;

	i = 0;
	my_str = (unsigned char *)(str);
	while (i < n)
	{
		my_str[i] = '\0';
		i++;
	}
}
