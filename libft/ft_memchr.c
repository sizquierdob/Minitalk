/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:26 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:53:28 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*my_str;

	i = 0;
	my_str = (unsigned char *)(str);
	while (i < n)
	{
		if (my_str[i] == (unsigned char)(c))
		{
			return (&my_str[i]);
		}
		i++;
	}
	return (0);
}
