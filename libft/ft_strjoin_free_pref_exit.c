/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_pref_exit.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:05:47 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:05:49 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRJOIN_FREE_PREF_EXIT
** Same as ft_strjoin, but the previous value of *pref is freed so we can
** realloc it while joining the two strings
*/

char	*ft_strjoin_free_pref_exit(char **pref, char *suff)
{
	char	*ret;

	if (!pref || !*pref)
		return (0);
	if (!suff)
		return (*pref);
	ret = ft_strjoin_exit(*pref, suff);
	ft_free_str(pref);
	return (ret);
}
