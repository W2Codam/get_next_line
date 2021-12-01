/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 06:19:30 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/12/01 12:06:32 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_i32	ft_putnbr_base(t_u64 nbr, char *HEX)
{	
	t_i32	i;
	t_i32	num;
	t_u8	*output;

	i = 0;
	num = 0;
	output = (t_u8 *)malloc(sizeof(char) * ft_intlen(nbr));
	while (1)
	{	
		output[i] = nbr % 16;
		nbr /= 16;
		i++;
		if (!nbr)
			break ;
	}
	i--;
	while (i >= 0)
	{
		write(1, &HEX[output[i]], 1);
		num++;
		i--;
	}
	free(output);
	return (num);
}
