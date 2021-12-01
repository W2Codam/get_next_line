/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 23:48:18 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/10/22 08:50:14 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_i32	ft_hex(t_u32 num, char up)
{
	if (!num)
		return (write(1, "0", 1));
	if (up == 'X')
		return (ft_putnbr_base(num, "0123456789ABCDEF"));
	return (ft_putnbr_base(num, "0123456789abcdef"));
}

static void	ft_select(char flag, t_i32 *num, va_list *args)
{
	if (flag == '%')
		(*num) += ft_putchar('%');
	else if (flag == 'c')
		(*num) += ft_putchar(va_arg(*args, t_i32));
	else if (flag == 'p')
		(*num) += ft_print_ptr(va_arg(*args, void *));
	else if (flag == 's')
		(*num) += ft_putstr(va_arg(*args, char *));
	else if (flag == 'd' || flag == 'i')
		(*num) += ft_printnum(va_arg(*args, t_i32));
	else if (flag == 'u')
		(*num) += ft_printnum(va_arg(*args, t_u32));
	else if (flag == 'x' || flag == 'X')
		(*num) += ft_hex(va_arg(*args, t_u32), flag);
}

t_i32	ft_printf(const char *format, ...)
{
	t_i32	num;
	va_list	args;

	num = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_select(*format, &num, &args);
		}
		else
			num += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (num);
}
