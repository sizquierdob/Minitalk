/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_first_n_chars_with_i.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:44:58 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:45:01 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** ft_display_first_n_chars_with_i
** This function will display first n chars of the string
** it will not stop at the string's '\0'
** It will highlight the jth character in yellow color
** This is useful to double check the strings created using ft_calloc
** so that we don't accidentally skip a character and obtain a cut/empty string
*/

void	ft_display_first_n_chars_with_i(char *str, int n, int fd, int j)
{
	int	i;

	i = 0;
	ft_putendl_fd("", fd);
	while (i < n)
	{
		if (i == j)
			ft_putstr_fd("\033[1m\033[33m", fd);
		if (!str[i])
			ft_putstr_fd("\\0", fd);
		ft_putchar_fd(str[i], fd);
		ft_putstr_fd("\x1b[0m", fd);
		i++;
	}
	ft_putendl_fd("", fd);
}
