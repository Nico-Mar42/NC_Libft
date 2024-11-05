/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolmar <nicolmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:00:42 by nicolmar          #+#    #+#             */
/*   Updated: 2024/10/31 16:17:27 by nicolmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	printtype(char c, va_list ap, int minlen)
{
	unsigned long	p;
	int				count;

	p = 0;
	count = 0;
	if (c == 'c')
		count = printchar(va_arg(ap, int), minlen);
	if (c == 's')
		count = printstr(va_arg(ap, char *), minlen);
	if (c == 'd' || c == 'i')
		count = printint(va_arg(ap, int));
	if (c == 'u')
		count = printusint(va_arg(ap, unsigned int));
	if (c == '%')
		count = printchar('%', 0);
	if (c == 'x')
		count = printhexa(c, va_arg(ap, unsigned int));
	if (c == 'X')
		count = printhexa(c, va_arg(ap, unsigned int));
	if (c == 'p')
		count = pre_printpoint(c, va_arg(ap, unsigned long));
	return (count);
}

int	defminlen(char *str, int *i)
{
	int		nbr;

	nbr = ft_atoi(&str[*i]);
	while (ft_isdigit(str[*i]) == 1)
		(*i)++;
	return (nbr);
}

int	printfflag(int *i, char *str, int count, va_list ap)
{
	int	minlen;
	int	countemp;

	if (ft_isalpha(str[*i]) == 1 || str[*i] == '%')
		count += printtype(str[*i], ap, 0);
	if (ft_isdigit(str[*i]) == 1)
	{
		minlen = defminlen(str, i);
		count += printtype(str[*i], ap, minlen);
	}
	if (str[*i] == '-')
	{
		(*i)++;
		minlen = defminlen(str, i);
		countemp = printtype(str[*i], ap, 0);
		count += printspace(minlen, countemp);
	}
	if (str[*i] == '0' )
	{
		(*i)++;
		minlen = defminlen(str, i);
		countemp = printtype(str[*i], ap, 0);
		count += printzero(minlen, countemp);
	}
	return (count);
}

int	ft_printf(const	char *format, ...)
{
	va_list	ap;
	int		i;
	int		count;
	int		argnbr;

	i = 0;
	va_start(ap, format);
	count = 0;
	argnbr = 1;
	while (format[i] != 0)
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i++]);
			count++;
		}
		else
		{
			i++;
			count = printfflag(&i, (char *)format, count, ap);
			i++;
		}
	}
	return (count);
}

//int	main(void)
//{
//	char	*str = "terte";
//	long 	len = LONG_MIN;
//	printf("taille total %d\n", ft_printf("test putchar = %c\n", 'G'));
//	printf("taille total %d\n", ft_printf("test putstr = %s\n", "quand"));
//	printf("taille total %d\n", ft_printf("test putdec = %d\n", -888));
//	printf("taille total %d\n", ft_printf("test putint = %i\n", 888));
//	printf("taille total %d\n", ft_printf("test put-usint = %u\n", -8));
//	printf("taille total %d\n", ft_printf("test put-percent = %%\n"));
//	printf("taille total %d\n", ft_printf("test put-hexalower = %x\n", 89));
//	printf("taille total %d\n", ft_printf("test put-hexaupper = %x\n", 89));
//	printf("taille total %d\n", ft_printf("test put-void = %p\n", &len));
//	printf("taille total %d\n", printf("test put-void = %p\n", &len));
//	return (0);
//}
