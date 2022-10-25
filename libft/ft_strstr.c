/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:07:28 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:07:30 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strstr(char *haystack, char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j] && haystack[i + j] && needle[j])
			j++;
		if (!needle[j])
			return (&haystack[i]);
		i++;
	}
	return (0);
}
