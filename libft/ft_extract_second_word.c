/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_second_word.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:11:43 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:12:25 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_EXTRACT_SECOND_WORD
** This function extracts the second word from the "from" argument
** depending on the "separators" argument
** This is used to extract the flags in minishell
*/

char	*ft_extract_second_word(char *from, char *separators)
{
	int		i;
	char	*ret;

	i = 0;
	while (ft_strchr(separators, from[i]))
		i++;
	while (!ft_strchr(separators, from[i]))
		i++;
	ret = ft_extract_first_word(&(from[i]), separators);
	return (ret);
}
