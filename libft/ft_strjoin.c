/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:05:53 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:05:55 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

char	*ft_strjoin(char const *pref, char const *suff)
{
	char	*ret;
	char	*my_pref;
	char	*my_suff;
	size_t	i;
	size_t	j;

	if (pref == 0 || suff == 0)
		return (0);
	i = -1;
	j = -1;
	my_pref = (char *)(pref);
	my_suff = (char *)(suff);
	ret = malloc(sizeof(char) * (ft_strlen(my_pref) + ft_strlen(my_suff) + 1));
	if (ret == 0)
		return (0);
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
