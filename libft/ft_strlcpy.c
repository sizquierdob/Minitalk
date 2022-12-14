/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:06:17 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:06:19 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_length;
	char	*my_src;

	my_src = (char *)(src);
	src_length = ft_strlen(my_src);
	if (dstsize == 0 || dest == 0)
	{
		return (src_length);
	}
	i = 0;
	while (my_src[i] != '\0' && i < (dstsize - 1))
	{
		dest[i] = my_src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
