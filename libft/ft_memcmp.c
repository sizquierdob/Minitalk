/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:19 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:53:22 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*my_str1;
	unsigned char	*my_str2;

	i = 0;
	my_str1 = (unsigned char *)(str1);
	my_str2 = (unsigned char *)(str2);
	while (my_str1[i] == my_str2[i] && i < n - 1)
	{
		i++;
	}
	if (i >= n)
	{
		return (0);
	}
	else
	{
		return (my_str1[i] - my_str2[i]);
	}
}
