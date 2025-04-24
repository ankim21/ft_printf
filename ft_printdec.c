/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankim <ankim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:51:28 by ankim             #+#    #+#             */
/*   Updated: 2025/01/29 13:17:17 by ankim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_printsigned(int x)
{
	return (ft_printint(x));
}

int	ft_printunsigned(unsigned int x)
{
	char	digit;
	int		len;

	len = 0;
	if (x >= 10)
	{
		digit = (x % 10) + '0';
		len = len + ft_printunsigned(x / 10);
		write (1, &digit, 1);
		len++;
	}
	else
	{
		digit = x + '0';
		write (1, &digit, 1);
		len++;
	}
	return (len);
}
