/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:48:59 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:49:02 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** ft_strcat
** Appends suff to pref, terminates the result by a '\0'
** Returns pref initial address
*/

char	*ft_strcat(char *pref, char *suff)
{
	int	i;
	int	j;

	if (!pref || !suff)
		return (pref);
	i = ft_strlen(pref);
	j = -1;
	while (suff[++j])
	{
		pref[i] = suff[j];
		i++;
	}
	pref[i] = 0;
	return (pref);
}
