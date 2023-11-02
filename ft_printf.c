/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:20:46 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/02 08:57:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar_fd(va_arg(args, int), 1);
	else if (specifier == 's')
		count += ft_putstr_fd(va_arg(args, char *), 1);
	else if (specifier == 'p')
		count +=
	else if (specifier == 'd')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	else if (specifier == 'i')
		count +=
	else if (specifier == 'u')
		count +=
	else if (specifier == 'x')
		count +=
	else if (specifier == 'X')
		count +=
	else if (specifier == '%')
		count +=
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		return_value;
	va_list	args;
	va_start(args, format);

	while(*format)
	{
		if 
		format++;
	}

	va_end(args);
	return (return_value);
}
