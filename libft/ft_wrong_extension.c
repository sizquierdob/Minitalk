/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrong_extension.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:08:14 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:08:16 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** This function will compare the file's name extension (via string after '.')
** to the expected extension provided as an argument
** Returns 1 if the extension is wrong/not accepted, 0 otherwise
*/

int	ft_wrong_extension(char *file_name, char *expected_extension)
{
	int	i;

	i = 0;
	while (file_name[i] && file_name[i] != '.')
		i++;
	if (!file_name[i])
		return (1);
	if (file_name[i] == '.')
	{
		if (ft_strlcmp(&(file_name[i + 1]), expected_extension) != 0)
			return (1);
	}
	return (0);
}
