/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:58 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:53:00 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t			i;
	unsigned char	*my_str;

	i = 0;
	my_str = (unsigned char *)(str);
	while (i < len)
	{
		my_str[i] = c;
		i++;
	}
	return (str);
}
