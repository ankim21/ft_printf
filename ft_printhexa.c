/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankim <ankim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 14:34:15 by ankim             #+#    #+#             */
/*   Updated: 2025/01/29 13:16:49 by ankim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printhexa(unsigned int x)
{
	char	digit;
	int		len;

	len = 0;
	if (x >= 16)
	{
		len += ft_printhexa(x / 16);
		if ((x % 16) >= 0 && (x % 16) <= 9)
			digit = (x % 16) + '0';
		else if ((x % 16) >= 10 && (x % 16) <= 15)
			digit = (x % 16) + 'a' - 10;
		write(1, &digit, 1);
		len++;
		return (len);
	}
	if (x < 10)
		digit = x + '0';
	else
		digit = x + 'a' - 10;
	write (1, &digit, 1);
	return (1);
}

int	ft_printhexa_2(unsigned int x)
{
	char	digit;
	int		len;

	len = 0;
	if (x >= 16)
	{
		len += ft_printhexa_2(x / 16);
		if ((x % 16) >= 0 && (x % 16) <= 9)
			digit = (x % 16) + '0';
		else if ((x % 16) >= 10 && (x % 16) <= 15)
			digit = (x % 16) + 'A' - 10;
		write(1, &digit, 1);
		len++;
		return (len);
	}
	if (x < 10)
		digit = x + '0';
	else
		digit = x + 'A' - 10;
	write (1, &digit, 1);
	return (1);
}

int	ft_printhexa_long(unsigned long x)
{
	int		len;
	char	digit;

	len = 0;
	if (x >= 16)
	{
		len += ft_printhexa_long(x / 16);
		if ((x % 16) >= 0 && (x % 16) <= 9)
			digit = (x % 16) + '0';
		else if ((x % 16) >= 10 && (x % 16) <= 15)
			digit = (x % 16) + 'a' - 10;
		write(1, &digit, 1);
		len++;
		return (len);
	}
	else if (x < 10)
		digit = x + '0';
	else
		digit = x + 'a' - 10;
	write (1, &digit, 1);
	return (1);
}

int	ft_printadd(void *ptr)
{
	unsigned long				new;
	int							len;

	if (!ptr)
		return (write (1, "(nil)", 5));
	len = 2;
	write(1, "0x", 2);
	new = (unsigned long)ptr;
	len += ft_printhexa_long(new);
	return (len);
}
