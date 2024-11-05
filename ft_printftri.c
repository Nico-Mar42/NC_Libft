/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printftri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:17:29 by nicolmar          #+#    #+#             */
/*   Updated: 2024/10/31 16:02:35 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "ft_printf.h"

int	pre_printpoint(char c, unsigned long p)
{
	int				count;

	count = 0;
	if (p != 0)
		count += printstr("0x", 0);
	count += printpoint(c, p);
	return (count);
}

int	printzero(int minlen, int countemp)
{
	while (countemp < minlen)
	{
		ft_putchar('0');
		countemp++;
	}
	return (countemp);
}

int	printspace(int minlen, int countemp)
{
	while (countemp < minlen)
	{
		ft_putchar(' ');
		countemp++;
	}
	return (countemp);
}

int	printstr(char *str, int minlen)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	if (str == NULL)
		len = 0;
	else
		len = ft_strlen(str);
	while (i < (minlen - len))
	{
		ft_putchar(' ');
		i++;
	}
	if (str == NULL)
	{
		ft_putstr("(null)");
		len = 6;
		return (len);
	}
	ft_putstr(str);
	return (len + i);
}
