/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:51:47 by nlyamani          #+#    #+#             */
/*   Updated: 2024/11/11 20:04:27 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putunsnbr(unsigned int n);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int n, int fd);
int	ft_putptr(void *ptr);