/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:23:29 by nlyamani          #+#    #+#             */
/*   Updated: 2024/11/11 19:48:05 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_void_to_hex(size_t nbr)
{
	char	*base;
	int		cnt;

	base = "0123456789abcdef";
	cnt = 0;
	while (nbr >= 16)
	{
		write(1, &base[nbr % 16], 1);
		nbr /= 16;
		cnt++;
	}
	write(1, &base[nbr % 16], 1);
	cnt++;
	return (cnt);
}

int	ft_putptr(void *ptr)
{
	int	cnt;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	cnt = 0;
	write(1, "0x", 2);
	cnt += 2;
	cnt += ft_void_to_hex((unsigned long) ptr);
	return (cnt);
}
