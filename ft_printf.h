/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:40:24 by lchee-ti          #+#    #+#             */
/*   Updated: 2023/11/03 07:39:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_putchar(char c);
int ft_strlen(char *str);
int ft_printc(va_list arg);
int ft_prints(va_list args);
int	ft_printf(const char *format, ...);

#endif