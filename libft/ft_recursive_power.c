/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:50:02 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 18:50:04 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

/*
** int	ft_recursive_power(int nb, int power)
** This function returns the result of nb ^ power
** Example: ft_recursive_power(2, 3) = 2 ^ 3 = 8
*/

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 && power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
