#include "ft_printf.h"
#include <stdarg.h>

int ft_printc(va_list args)
{
    char    c;

    c = va_arg(args, int);
    ft_putchar(c);
    return (1);
}