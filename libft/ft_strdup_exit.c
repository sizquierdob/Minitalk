/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_exit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:03:55 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:03:56 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strdup_exit(const char *src)
{
	char	*str;
	char	*my_src;

	if (!src)
		return (0);
	my_src = (char *)(src);
	str = malloc(sizeof(*str) * (ft_strlen(my_src) + 1));
	if (!str)
		exit(EXIT_FAILURE);
	return (ft_strcpy(str, my_src));
}
