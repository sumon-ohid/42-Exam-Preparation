/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msumon <msumon@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:29:57 by msumon            #+#    #+#             */
/*   Updated: 2023/12/13 19:46:46 by msumon           ###   ########.fr       */
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
        if (num == -2147483648)
        {
            write(1, "-2147483648", 11);
            *len = 11;
        }
        else
        {
            num = num * (-1);
            write (1, "-", 1);
            len++;
        }
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
    if (!format)
        return (-1);
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
        else
        {
            write(1, &format[i], 1);
            i++;
        }
        len++;
    }
    va_end(ap);
    return (len);
}

int main(void)
{    
    ft_printf("%s\n", "toto");
    ft_printf("Magic %s is %d", "number", 42);
    ft_printf("\n");
    ft_printf("Hexadecimal for %d is %x\n", 42, 42);
    return (0);
}