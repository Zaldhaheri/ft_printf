/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:13:13 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/01/17 18:44:03 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>

int	ft_isconversion(char c);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int x);
int	ft_putnbru(unsigned int x);
int	ft_putpointer(unsigned long v);
int	ft_puthex_upper(unsigned int x);
int	ft_puthex_lower(unsigned int x);
int	ft_printf(const char *s, ...);

#endif