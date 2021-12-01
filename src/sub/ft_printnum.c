/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printnum.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 06:50:58 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/12/01 12:06:25 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_shit(t_i64 n, t_i32 *num)
{
	if (n == INT_MIN)
	{
		(*num) += ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		(*num) += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		(*num) += ft_putchar(n + '0');
	else
	{
		ft_shit(n / 10, num);
		ft_shit(n % 10, num);
	}
}

t_i32	ft_printnum(t_i64 n)
{
	t_i32	num;

	num = 0;
	ft_shit(n, &num);
	return (num);
}
