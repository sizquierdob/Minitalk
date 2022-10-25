/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:06:06 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:06:08 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	char		*my_src;
	int			dst_len;

	my_src = (char *)(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (i >= dstsize || dstsize == 0)
	{
		return (dstsize + ft_strlen(my_src));
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = my_src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(my_src));
}
