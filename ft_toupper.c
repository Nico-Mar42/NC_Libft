/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:34:36 by nicolmar          #+#    #+#             */
/*   Updated: 2024/10/30 11:10:19 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_toupper(int c)
{
	int	rep;

	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		rep = c - 32;
	else
		rep = c;
	return (rep);
}
