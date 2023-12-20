/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumon <sumon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:29:57 by msumon            #+#    #+#             */
/*   Updated: 2023/12/20 23:38:04 by sumon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void ft_putstr(char *str, int *len)
{
    int i = 0;

    if (!str)
        str = "(null)";
    while(str[i])
    {
        *len += write(1, &str[i], 1);
        i++;
    }
}

void ft_print_digit(long long int num, int base, int *len)
{
    char *hex = "0123456789abcdef";
    
    if (num < 0)
    {
        num *= -1;
        *len += write(1, "-", 1);
    }
    if (num >= base)
        ft_print_digit((num / base), base, len);
    *len += write(1, &hex[num % base], 1);
}


int ft_printf(const char *format, ... )
{
    int i = 0;
    int len = 0;

    va_list ap;
    va_start(ap, format);
    while (format[i])
    {
        if ((format[i] == '%') && ((format[i + 1] == 's') || (format[i + 1] == 'd') || (format[i + 1] == 'x')))
        {
            i++;
            if (format[i] == 's')
                ft_putstr(va_arg(ap, char *), &len);
            else if (format[i] == 'd')
                ft_print_digit((long long int)va_arg(ap, int), 10, &len);
            else if (format[i] == 'x')
                ft_print_digit((long long int)va_arg(ap, unsigned int), 16, &len);
        }
        else
            len += write(1, &format[i], 1);
        i++;
    }
    return (va_end(ap), len);
}
