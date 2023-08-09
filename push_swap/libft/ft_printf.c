/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toantune <toantune@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 08:56:49 by toantune          #+#    #+#             */
/*   Updated: 2023/08/09 13:50:33 by toantune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...);

static void	ft_putchar_pf(int c, int *len)
{
	*len += 1;
	write(1, &c, 1);
}

static void	ft_putstr_pf(char *str, int *len)
{
	if (!str)
		ft_putstr_pf("(null)", len);
	else
	{
		while (*str)
		{
			ft_putchar_pf(*str, len);
			str++;
		}
	}
}

static void	ft_putnbr_pf(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		ft_putchar_pf('-', len);
		ft_putchar_pf('2', len);
		ft_putnbr_pf(147483648, len);
	}
	else if (nbr < 0)
	{
		ft_putchar_pf('-', len);
		ft_putnbr_pf(-nbr, len);
	}
	else if (nbr > 9)
	{
		ft_putnbr_pf(nbr / 10, len);
		ft_putnbr_pf(nbr % 10, len);
	}
	else
		ft_putchar_pf(nbr + '0', len);
}

static void	ft_putnbrus_pf(unsigned int nbr, int *len)
{
	if (nbr > 9)
	{
		ft_putnbr_pf(nbr / 10, len);
		ft_putnbr_pf(nbr % 10, len);
	}
	else
		ft_putchar_pf(nbr + '0', len);
}

static void	ft_putaddr_pf(unsigned long int nb, char *base, int *len)
{
	if (nb > 15)
	{
		ft_putaddr_pf(nb / 16, base, len);
		ft_putaddr_pf(nb % 16, base, len);
	}
	else
		ft_putchar_pf(base[nb], len);
}

static void	ft_putnbr_baseus_pf(unsigned long int nb, char *base, int *len)
{
	if (!(void *)nb)
		ft_putstr_pf("(nil)", len);
	else
	{
		ft_putchar_pf('0', len);
		ft_putchar_pf('x', len);
		ft_putaddr_pf(nb, base, len);
	}
}

static void	ft_putnbr_base_pf(unsigned int nb, char *base, int *len)
{
	if (nb == 0)
	{
		ft_putchar_pf('0', len);
		return ;
	}
	else if (nb != 0)
	{
		if (nb / ft_strlen(base) != 0)
			ft_putnbr_base_pf(nb / ft_strlen(base), base, len);
		ft_putchar_pf(base[nb % ft_strlen(base)], len);
	}
}

static void	conversionmng(char c, va_list args, int *len)
{
	char	*base_x;
	char	*base_xx;

	base_x = "0123456789abcdef";
	base_xx = "0123456789ABCDEF";
	if (c == '%')
		ft_putchar_pf('%', len);
	else if (c == 'c')
		ft_putchar_pf(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr_pf(va_arg(args, char *), len);
	else if (c == 'i' || c == 'd')
		ft_putnbr_pf(va_arg(args, int), len);
	else if (c == 'u')
		ft_putnbrus_pf(va_arg(args, unsigned int), len);
	else if (c == 'x')
		ft_putnbr_base_pf(va_arg(args, unsigned int), base_x, len);
	else if (c == 'X')
		ft_putnbr_base_pf(va_arg(args, unsigned int), base_xx, len);
	else if (c == 'p')
		ft_putnbr_baseus_pf(va_arg(args, unsigned long int), base_x, len);
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
			ft_putchar_pf(*format, ptr);
		format++;
	}
	va_end(args);
	return (len);
}
