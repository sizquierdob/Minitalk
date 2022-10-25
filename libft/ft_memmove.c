/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:04 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:53:06 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*my_dest;
	unsigned char	*my_src;

	my_dest = (unsigned char *)(dst);
	my_src = (unsigned char *)(src);
	i = -1;
	if (my_dest == 0 && my_src == 0)
		return (0);
	if (my_dest > my_src)
	{
		while (len > 0)
		{
			my_dest[len - 1] = my_src[len - 1];
			len--;
		}
	}
	else
	{
		while (++i < len)
			my_dest[i] = my_src[i];
	}
	return (my_dest);
}
