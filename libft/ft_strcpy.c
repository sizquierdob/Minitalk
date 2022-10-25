/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:03:42 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:03:44 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*my_src;

	my_src = (char *)(src);
	i = 0;
	while (my_src[i] != '\0')
	{
		dest[i] = my_src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
