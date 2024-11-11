/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:32:49 by nlyamani          #+#    #+#             */
/*   Updated: 2024/11/11 18:50:51 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	write_int(int i, char*str)
{
	while (i-- > 0)
		write(1, &str[i], 1);
}

int	ft_putnbr(int n)
{
	int		i;
	char	str[10];
	int		c;

	i = 0;
	c = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
		c++;
	}
	while (n > 0)
	{
		str[i++] = (n % 10) + 48;
		n /= 10;
		c++;
	}
	write_int(i, str);
	return (c);
}
