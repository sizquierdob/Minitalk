/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_exit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:04:31 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:04:33 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRJOIN_EXIT
** Same as ft_strjoin, but instead of returning NULL when a malloc fails
** this function calls exit(EXIT_FAILURE)
*/

char	*ft_strjoin_exit(char *pref, char *suff)
{
	char	*ret;
	size_t	i;
	size_t	j;

	if (!pref)
		return (0);
	if (!suff)
		return (ft_strdup_exit(pref));
	i = -1;
	j = -1;
	pref = (char *)(pref);
	suff = (char *)(suff);
	ret = malloc(sizeof(char) * (ft_strlen(pref) + ft_strlen(suff) + 1));
	if (!ret)
		exit(EXIT_FAILURE);
	while (pref[++i] != '\0')
		ret[i] = pref[i];
	while (suff[++j] != '\0')
	{
		ret[i] = suff[j];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
