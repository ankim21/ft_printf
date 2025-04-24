/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankim <ankim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:20:48 by ankim             #+#    #+#             */
/*   Updated: 2025/01/24 16:00:40 by ankim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printint(int x)
{
	int		len;

	len = 0;
	if (x == -2147483648)
	{
		return (write (1, "-2147483648", 11));
	}
	if (x < 0)
	{
		write(1, "-", 1);
		x = x * -1;
		len = 1;
	}
	if (x >= 10)
	{
		len += ft_printint(x / 10);
		write(1, &(char){x % 10 + '0'}, 1);
		len++;
	}
	else
	{
		write(1, &(char){x + '0'}, 1);
		len++;
	}
	return (len);
}
