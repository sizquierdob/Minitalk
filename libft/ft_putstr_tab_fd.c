/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_tab_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:51:16 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:51:19 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

void	ft_putstr_tab(char **str_tab, int fd)
{
	int	i;

	if (!str_tab)
	{
		ft_putstr_fd("(null) str_tab\n", fd);
		return ;
	}
	i = -1;
	while (str_tab[++i])
		ft_putendl_fd(str_tab[i], fd);
}
