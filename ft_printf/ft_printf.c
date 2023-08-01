/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:23:44 by toantune          #+#    #+#             */
/*   Updated: 2023/05/31 18:22:46 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...);

static void	conversionmng(char c, va_list args, int *len)
{
	char	*base_x;
	char	*base_xx;

	base_x = "0123456789abcdef";
	base_xx = "0123456789ABCDEF";
	if (c == '%')
		ft_putchar('%', len);
	else if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_putnbrus(va_arg(args, unsigned int), len);
	else if (c == 'x')
		ft_putnbr_base(va_arg(args, unsigned int), base_x, len);
	else if (c == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), base_xx, len);
	else if (c == 'p')
		ft_putnbr_baseus(va_arg(args, unsigned long int), base_x, len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		*ptr;

	va_start(args, format);
	ptr = &len;
	len = 0;
	while (*format)
	{	
		if (*format == '%')
		{
			format++;
			conversionmng(*format, args, ptr);
		}		
		else
			ft_putchar(*format, ptr);
		format++;
	}
	va_end(args);
	return (len);
}
