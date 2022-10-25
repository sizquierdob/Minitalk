/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup_exit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:06:23 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:06:25 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRLDUP_EXIT
** Same as ft_strldup_exit, but will only copy first n_chars characters
** Returns the malloc'd result string
*/

char	*ft_strldup_exit(const char *src, int n_chars)
{
	char	*str;
	char	*my_src;

	if (!src)
		return (0);
	my_src = (char *)(src);
	str = malloc(sizeof(char) * (n_chars + 1));
	if (!str)
		exit(EXIT_FAILURE);
	ft_strlcpy(str, my_src, n_chars);
	return (str);
}
