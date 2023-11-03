#include "ft_printf.h"
#include <stdarg.h>

int ft_prints(va_list args)
{
    int     i;
    int     len;
    char    *str;

    i = -1;
    str = va_arg(args, char *);
    if (str == NULL)
    {
        str = "(null)";
        len = ft_strlen(str);
        while (str[++i] != '\0')
            ft_putchar(str[i]);
        return (len);
    }
    else
    {
        len = ft_strlen(str);
        while (str[++1] != '\0')
            ft_putchar(str[i]);
        return (len);
    }
}