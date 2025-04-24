/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankim <ankim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:17:15 by ankim             #+#    #+#             */
/*   Updated: 2025/02/05 13:23:34 by ankim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

int	handle_spec(char spec, va_list args)
{
	if (spec == '%')
		return (ft_printpercent());
	else if (spec == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (spec == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (spec == 'i')
		return (ft_printint(va_arg(args, int)));
	else if (spec == 'p')
		return (ft_printadd(va_arg(args, void *)));
	else if (spec == 'x')
		return (ft_printhexa(va_arg(args, unsigned int)));
	else if (spec == 'X')
		return (ft_printhexa_2(va_arg(args, unsigned int)));
	else if (spec == 'd')
		return (ft_printsigned(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_printunsigned(va_arg(args, unsigned int)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += handle_spec (*format, args);
		}
		else
			count += ft_printchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
