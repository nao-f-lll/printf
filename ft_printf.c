/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:53:26 by nlyamani          #+#    #+#             */
/*   Updated: 2024/11/11 20:09:35 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	select_option(const char *format, int ind, va_list args)
{
	int	cnt;

	cnt = 0;
	if (*(format + ind + 1) == '%')
		cnt += ft_putchar('%');
	if (*(format + ind + 1) == 'c')
		cnt += ft_putchar((char) va_arg(args, int));
	if (*(format + ind + 1) == 'd' || *(format + ind + 1) == 'i')
		cnt += ft_putnbr(va_arg(args, int));
	if (*(format + ind + 1) == 'u')
		cnt += ft_putunsnbr(va_arg(args, unsigned int));
	if (*(format + ind + 1) == 'X')
		cnt += ft_puthex(va_arg(args, unsigned int), 1);
	if (*(format + ind + 1) == 'x')
		cnt += ft_puthex(va_arg(args, unsigned int), 0);
	if (*(format + ind + 1) == 's')
		cnt += ft_putstr(va_arg(args, char *));
	if (*(format + ind + 1) == 'p')
		cnt += ft_putptr(va_arg(args, void *));
	return (cnt);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ind;
	int		cnt;

	ind = 0;
	cnt = 0;
	if (format != NULL)
	{
		va_start(args, format);
		while (*(format + ind) != '\0')
		{
			if ((*(format + ind) == '%' && *(format + ind + 1) != '\0'))
			{
				select_option((char *)format, ind, args);
				ind += 2;
			}
			else
				ft_putchar(*(format + ind++));
		}
		va_end(args);
	}
	return (ind);
}

/*
#include <stdio.h>
int main(void)
{
	int a = 1;
	ft_printf("%p ", &a);
	//ft_printf("%c ", 'N');
	//ft_printf("%X", 2047);
	//ft_printf("hello my name is %s and i'm %d years old", "Naoufal", 24);
	//printf("\n");
	//ft_printf("%s %c%d%c%i%c %u Hel%%oo Again", "Naoufal", 'A', 785, 'd', -87, '9', 12);
	//ft_printf("%s", "Naoufal");
	return (0);
}
*/
