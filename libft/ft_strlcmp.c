/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:06:12 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:06:14 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** Returns 0 if both strings are the same, including their length
** Returns a difference between first two different encountered chars otherwise
*/

int	ft_strlcmp(char *s1, char *s2)
{
	int	i;

	if (!s1 && !s2)
		return (0);
	if (!s1 && s2)
		return (-1);
	if (s1 && !s2)
		return (-1);
	if (ft_strlen(s1) != ft_strlen(s2))
		return (-1);
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((int)(s1[i] - s2[i]));
}
