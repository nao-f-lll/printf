/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:41:53 by nlyamani          #+#    #+#             */
/*   Updated: 2024/11/13 17:01:45 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	c;

	c = 0;
	if (s != NULL)
	{
		c = 0;
		while (*s)
		{
			write(1, s++, 1);
			c++;
		}
		return (c);
	}
	else
		return (c + ft_putstr("(null)"));
	return (c);
}
