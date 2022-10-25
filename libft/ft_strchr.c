/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:27:35 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:48:37 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*my_str;

	my_str = (char *)(str);
	i = 0;
	while (my_str[i] != '\0')
	{
		if (my_str[i] == c)
		{
			return (&my_str[i]);
		}
		i++;
	}
	if (my_str[i] == c)
	{
		return (&my_str[i]);
	}
	return (0);
}
