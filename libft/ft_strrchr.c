/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:07:19 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:07:21 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		str_len;
	char		*my_s;

	str_len = ft_strlen(s);
	my_s = (char *)(s);
	if ((char)(c) == '\0')
	{
		return (&my_s[str_len]);
	}
	while (str_len > 0)
	{
		if (my_s[str_len] == (char)(c))
		{
			return (&my_s[str_len]);
		}
		str_len--;
	}
	if (my_s[str_len] == (char)(c))
	{
		return (my_s);
	}
	return (0);
}
