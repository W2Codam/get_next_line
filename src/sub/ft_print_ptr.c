/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_ptr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 06:20:15 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/12/01 12:06:26 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_i32	ft_print_ptr(void *ptr)
{
	if (!ptr)
		return (write(1, "0x0", 3));
	return (write(1, "0x", 2) + ft_putnbr_base((t_u64)ptr, "0123456789abcdef"));
}
