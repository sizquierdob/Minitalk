/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sizquier <sizquier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:27:45 by sizquier          #+#    #+#             */
/*   Updated: 2022/10/25 19:31:19 by sizquier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

/*
** static int	ft_found_errors_in_main(int argc, char **argv)
** Esta funcion se usa para chequear los errores en el main.
** Errores tipificados:
** 1) Numero de argumentos equivocados
** 2) que el argumento pasado como id sea numerico
*/

static int	ft_found_errors_in_main(int argc, char **argv)
{
	int	i;

	if (argc != 3)
		return (1);
	i = -1;
	while (argv[1][++i])
	{
		if (!ft_strchr("0123456789", argv[1][i]))
			return (1);
	}
	return (0);
}

/*
** static void	ft_send_next_char_bit_by_bit(char c, int pid)
** La función toma un char c como argumento, y envia su valor binario
** Se envia al servidor, mediante el pid argumento, bit por bit cada vez
** usamos SIGUSR2 (=31) para enviar "1" and SIGUSR1 (=30) para enviar "0".
** La linea "if (c & 0x01)" compara el bit en el que se encuentre con 1
** La linea "c = c >> 1" avanza al bit siguiente en c.
** la funcion usleep se encarga de esperar a que le lleguen los bits
*/

static void	ft_send_next_char_bit_by_bit(unsigned char c, int pid)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (c & 0x01)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		c = c >> 1;
		usleep(WAIT_TIME);
	}
}

/*
** Función para enviar la longitud del string bit por bit
*/

static void	ft_send_strlen_bit_by_bit(int len, int pid)
{
	int	i;

	i = -1;
	while (++i < 32)
	{
		if (len & 0x01)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		len = len >> 1;
		usleep(WAIT_TIME);
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*str_to_send;
	int		len;
	int		i;

	if (ft_found_errors_in_main(argc, argv))
		return (-1);
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		return (-1);
	str_to_send = argv[2];
	len = ft_strlen(str_to_send);
	i = -1;
	ft_send_strlen_bit_by_bit(len, pid);
	while (str_to_send[++i])
		ft_send_next_char_bit_by_bit(str_to_send[i], pid);
	ft_send_next_char_bit_by_bit(str_to_send[i], pid);
}
