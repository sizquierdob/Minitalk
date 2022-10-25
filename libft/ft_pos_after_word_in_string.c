/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_after_word_in_string.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:52:16 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:52:19 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_POS_AFTER_THE_WORD_IN_STRING
** Returns the adress in *str following the word or 0 if the word doesn't occur
** in str
*/

char	*ft_pos_after_the_word_in_string(char *str, char *word)
{
	int		i;
	char	*temp;

	if (!str || !word)
		return (0);
	i = 0;
	temp = ft_strnstr(str, word, ft_strlen(str));
	if (!temp)
		return (0);
	while (temp[i] == word[i] && temp[i] && word[i])
		i++;
	return (&temp[i]);
}
