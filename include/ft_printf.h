/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lde-la-h <lde-la-h@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 23:48:16 by lde-la-h      #+#    #+#                 */
/*   Updated: 2021/12/01 12:06:55 by lde-la-h      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//= Types =//

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

typedef int					t_bool;

typedef signed char			t_i8;
typedef unsigned char		t_u8;

typedef signed short		t_i16;
typedef unsigned short		t_u16;

typedef signed int			t_i32;
typedef unsigned int		t_u32;

typedef signed long long	t_i64;
typedef unsigned long long	t_u64;

typedef size_t				t_size;

//= Subfuncs =//

t_i32	ft_printnum(t_i64 n);
t_size	ft_strlen(const char *str);
t_i32	ft_putstr(char *str);
t_i64	ft_intlen(t_i64 n);
t_i32	ft_print_ptr(void *ptr);
t_i32	ft_write_null(void);
t_i32	ft_putchar(char c);
t_i32	ft_putnbr_base(t_u64 nbr, char *HEX);

//= Main =//

/** 
 * Printf prints a formatted string to standart out
 * @param format The format specification/string to be printed.
 * @param ... The arguments to use for formatting
 * @result The num of bytes printed.
 */
t_i32	ft_printf(const char *format, ...);

#endif