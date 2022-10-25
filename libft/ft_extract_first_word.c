/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_first_word.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:53:51 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 17:53:54 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_EXTRACT_FIRST_WORD
** This function will extract the first word from the "from" argument
** based on the "separators" argument
** It will return the malloc'd copy of the first word
*/

char	*ft_extract_first_word(char *from, char *separators)
{
	int		i;
	char	*temp_copy;
	char	*ret;

	i = -1;
	temp_copy = ft_strtrim_exit(from, separators);
	if (!temp_copy || !temp_copy[0])
	{
		ft_free_str(&temp_copy);
		return (0);
	}
	while (temp_copy[++i])
	{
		if (ft_strchr(separators, temp_copy[i]))
		{
			temp_copy[i] = 0;
			break ;
		}
	}
	ret = ft_strdup_exit(temp_copy);
	ft_free_str(&temp_copy);
	return (ret);
}
