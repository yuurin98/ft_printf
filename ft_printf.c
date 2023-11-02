/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchee-ti <lchee-ti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:20:46 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/02 13:56:42 by lchee-ti         ###   ########.fr       */
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
	else if (specifier == 'd')
		count += ft_putnbr_fd(va_arg(args, int), 1);
	else if (specifier == 'i')
	else if (specifier == 'u')
	else if (specifier == 'x')
	else if (specifier == 'X')
	else if (specifier == '%')
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
