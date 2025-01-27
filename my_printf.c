/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:28:50 by scheragh          #+#    #+#             */
/*   Updated: 2025/01/27 21:20:28 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_printchar(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (specifier == 'p')
		count += ft_printptr(va_arg(ap, void *));
	else if (specifier == 'd')
		count += ft_printdecimal(va_arg(ap, int));
	else if (specifier == 'i')
		count += ft_printinteger(va_arg(ap, int));
	else if (specifier == 'u')
		count += ft_printunsign_decimal(va_arg(ap, unsigned int));
	else if (specifier == 'x' || sepcifier == 'X')
		count += ft_printhex(va_arg(ap, unsigned int));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	my_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}

int	main()
{
	int	count;

	count = my_printf("Hello %s\n", "John");
	print(const char *, ...);
	my_printf("The chars written are %d\n", count);
}
