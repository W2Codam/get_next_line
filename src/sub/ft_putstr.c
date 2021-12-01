/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 06:29:53 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/12/01 12:06:36 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_i32	ft_putstr(char *str)
{
	if (!str)
		return (ft_write_null());
	return (write(1, str, ft_strlen(str)));
}
