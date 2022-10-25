/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:58:48 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:58:50 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_STRCHRN
** This function is a copy of strchr
** It looks for the character c inside the str argument, but returns the
** position of the character as an int (= Nth character) rather than the 
** address of the string starting at the character
** Returns -1 if the character wasn't found
*/

int	ft_strchrn(char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			return (i + 1);
	}
	return (-1);
}
