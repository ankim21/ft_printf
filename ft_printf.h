/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankim <ankim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:47:55 by ankim             #+#    #+#             */
/*   Updated: 2025/01/29 13:26:59 by ankim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_printpercent(void);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printint(int x);
int	ft_printsigned(int x);
int	ft_printunsigned(unsigned int x);
int	ft_printhexa(unsigned int x);
int	ft_printhexa_2(unsigned int x);
int	ft_printhexa_long(unsigned long x);
int	ft_printadd(void *ptr);

#endif
