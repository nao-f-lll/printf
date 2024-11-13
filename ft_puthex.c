/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:42:17 by nlyamani          #+#    #+#             */
/*   Updated: 2024/11/13 17:00:54 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert_dec_hex(char*nbrs, int nbr, int is_upper)
{
	int		i;
	char	*base;

	i = 0;
	if (is_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	while (nbr >= 16)
	{
		nbrs[i] = base[nbr % 16];
		nbr /= 16;
		i++;
	}
	nbrs[i] = base[nbr % 16];
	i++;
	return (i);
}

int	ft_puthex(int nbr, int is_upper)
{
	char	nbrs[8];
	int		i;
	int		counter;

	counter = 0;
	i = ft_convert_dec_hex(nbrs, nbr, is_upper);
	while (i-- > 0)
	{
		write(1, &nbrs[i], 1);
		counter++;
	}
	return (counter);
}
