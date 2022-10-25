/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_exit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:51:10 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:51:12 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** FT_READ_EXIT
** This function calls read with the same arguments, but in case of a call
** to read returning -1 because of an error, instead of returning -1
** this function will exit the program straight away
*/

int	ft_read_exit(int fd, void *buff, size_t b_bytes)
{
	int	ret;

	ret = read(fd, buff, b_bytes);
	if (ret < 0)
	{
		printf("can't read\n");
		exit(EXIT_FAILURE);
	}
	return (ret);
}
