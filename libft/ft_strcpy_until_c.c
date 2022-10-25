/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_until_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:03:35 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:03:37 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRCPY_UNTIL_C
** Same as strcpy, but will stop copying if a 'c' argument character is seen 
** This character seen is included in the copy (useful for minishell)
*/

char	*ft_strcpy_until_c(char *dest, const char *src, char c)
{
	int		i;
	char	*my_src;

	my_src = (char *)(src);
	i = 0;
	while (my_src[i] && my_src[i] != c)
	{
		dest[i] = my_src[i];
		i++;
	}
	if (my_src[i] == c)
	{
		dest[i] = my_src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
