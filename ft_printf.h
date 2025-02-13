/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:51:47 by nlyamani          #+#    #+#             */
/*   Updated: 2024/11/13 19:19:53 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define INT_MIN -2147483648
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putunsnbr(unsigned int n);
int	ft_putnbr(int n);
int	ft_puthex(int n, int fd);
int	ft_putptr(void *ptr);
int	ft_printf(const char *format, ...);
#endif
