/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/22 06:30:54 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/12/01 12:06:38 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_size	ft_strlen(const char *str)
{
	t_size	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
