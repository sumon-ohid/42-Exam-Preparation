/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:29:57 by msumon            #+#    #+#             */
/*   Updated: 2023/12/13 17:57:07 by msumon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void ft_putstr(char *str, int *len)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    *len = i - 1;
}

void ft_print_digit(int num, int base, int *len)
{
    char *hex = "0123456789abcdef";
    
    if (num < 0)
    {
        num = num * (-1);
        write (1, "-", 1);
        len++;
    }
    if (num >= base)
        ft_print_digit(num / base, base, len);
    write(1, &hex[num % base], 1);
    len = len + 1;
}

int ft_printf(const char *format, ... )
{

    va_list ap;
    int i;
    int len;
    
    len = 0;
    i = 0;
    va_start(ap, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 's')
                ft_putstr(va_arg(ap, char *), &len);
            else if (format[i] == 'd')
                ft_print_digit(va_arg(ap, int), 10, &len);
            else if (format[i] == 'x')
                ft_print_digit(va_arg(ap, int), 16, &len);
            i++;
        }
        write(1, &format[i], 1);
        len++;
        i++;
    }
    va_end(ap);
    return (len);
}

int main(void)
{
    char *str = "hello";
    int n = 100;
    
    int re = ft_printf("%s\n", str);
    ft_printf("%d\n", re);
    re = ft_printf("Number is %d\n", n);
    ft_printf("%d\n", re);
    re = ft_printf("Number is %x\n", n);
    ft_printf("%d\n", re);
    return (0);
}
