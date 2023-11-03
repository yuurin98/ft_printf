/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:20:46 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/03 07:46:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	ft_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_printc(va_arg(args, int));
	else if (specifier == 's')
		count += ft_prints(va_arg(args, char *));
	else if (specifier == 'p')
		count +=
	else if (specifier == 'd')
		count += 
	else if (specifier == 'i')
		count += 
	else if (specifier == 'u')
		count +=
	else if (specifier == 'x')
		count +=
	else if (specifier == 'X')
		count +=
	else if (specifier == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(&specifier);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		return_value;
	va_list	args;
	va_start(args, format);

	while(*format)
	{
		if (*format == '%')
		{
			format++;
			format = ft_format(format, va_arg(args, int));
		}
		format++;
	}

	va_end(args);
	return (return_value);
}
