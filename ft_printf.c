/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:29:06 by zaldhahe          #+#    #+#             */
/*   Updated: 2024/01/17 18:46:32 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argconv(va_list *args, char c)
{
	int	n;

	n = 0;
	if (c == 'c')
		n += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		n += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		n += ft_putpointer(va_arg(*args, unsigned long));
	else if (c == 'd')
		n += ft_putnbr(va_arg(*args, int));
	else if (c == 'i')
		n += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		n += ft_putnbru(va_arg(*args, unsigned int));
	else if (c == 'x')
		n += ft_puthex_lower(va_arg(*args, unsigned int));
	else if (c == 'X')
		n += ft_puthex_upper(va_arg(*args, unsigned int));
	else if (c == '%')
		n += ft_putchar('%');
	return (n);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		n;
	va_list	args;

	i = 0;
	n = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && ft_isconversion(s[i + 1]))
			n += ft_argconv(&args, s[++i]);
		else
			n += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (n);
}

// int main()
// {
// 	int i = ft_printf(" %p %p \n",LONG_MIN , LONG_MAX);
// 	int j = printf(" %p %p \n",LONG_MIN , LONG_MAX);
// 	printf("ft: %d, og: %d\n", i, j);
// }
